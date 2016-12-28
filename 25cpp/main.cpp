/*
 * 2016年12月28日17:43:31
 *
 * 包装一个类，实现一个类似的智能指针
 * 类对象确定性析构
*/
#include <iostream>
#include <cassert>

using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Test()" << endl;
    }

    ~Test()
    {
        cout << "~Test()" << endl;
    }

    void Display()
    {
        cout << "This is the Test()" << endl;
    }
};

class TestController
{
public:
    TestController()
    {
        this->test_ = new Test();
    }

    ~TestController()
    {
        delete this->test_;
    }

    Test* operator ->()
    {
        return this->test_;
    }

private:
    Test* test_;
};

class Tmp
{
public:
    Tmp(int n) : n_(n)
    {
        cout << "Tmp construction" << endl;
    }
    int n_;
};

int main()
{
    // TestController tController;
    // tController->Display();

    /*
     * new 的三种用法
     *
     * 1. new operator
     * 2. operator new
     * 3. placement new
    */
    Tmp* t1 = new Tmp(100); // new operator = operator new + 构造函数
    cout << t1->n_ << endl;

    char chunk[10];
    Tmp* t2 = new (chunk) Tmp(200); // 在chunk空间中，创建Tmp对象
    cout << t2->n_ << endl;

    assert((char*)chunk == (char*)t2);

    // Tmp* t3 = (Tmp*)chunk;
    Tmp* t3 = reinterpret_cast<Tmp*>(chunk);
    cout << t3->n_ << endl;
    return 0;
}
