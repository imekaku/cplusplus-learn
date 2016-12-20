/*
 * C++ 异常展示
 * 2016年12月20日16:16:57
*/

#include <iostream>
using namespace std;

class Test
{
public:
    Test() : n_(0)
    {
        cout << "The Test construct!" << endl;
    }
    Test(const Test& other)
    {
        this->n_ = other.n_;
        cout << "The Test Copy Construct" << endl;
    }
    ~Test()
    {
        cout << "~Test" << endl;
    }

    void Display()
    {
        cout << "The Test" << endl;
    }

private:
    int n_;
};

Test func()
{
    Test t; // 调用构造函数
    return t; // 应该调用拷贝构造函数，但是没有调用，然后调用析构函数
    // 如果返回引用的话，那就直接返回了一个在栈空间创建的局部变量，此时会有警告

    // return Test();
}

int main()
{
    func();
    cout << "The main end" << endl;
    return 0;
}

/*
 * output:
The Test construct!
~Test
The main end
*/
