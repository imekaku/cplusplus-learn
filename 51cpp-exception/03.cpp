/*
 * 在类中的构造函数中抛出异常
 * 2016年12月20日16:51:46
*/

#include <iostream>
using namespace std;

class MyException
{
public:
    MyException(const char *messages) : messages_(messages)
    {
        cout << "This is the MyException Construct!" << endl;
    }

    MyException(const MyException& other) : messages_(other.messages_)
    {
        cout << "This is the MyException Copy Construct!" << endl;
    }

    ~MyException()
    {
        cout << "~MyException" << endl;
    }

    const char* what() const
    {
        return messages_.c_str();
    }

private:
    string messages_;
};

class Obj
{
public:
    Obj()
    {
        cout << "Obj() construct" << endl;
    }
    ~Obj()
    {
        cout << "~Obj()" << endl;
    }
};

class Test
{
public:
    Test()
    {
        cout << "Test() construct" << endl;
        throw MyException("Construct exception!"); // 在构造函数中抛出异常
        // Test对象被部分构造
    }
    ~Test() // 析构函数不会被调用
    {
        cout << "~Test()" << endl;
    }
private:
    Obj obj; // 先调用成员函数的构造函数
};

int main()
{
    try
    {
        Test t; // 构造对象，调用构造函数，抛出异常
    }
    catch (MyException& e)
    {
        cout << e.what() << endl;
    }

    return 0;
}

/*
Obj() construct
Test() construct
This is the MyException Construct!
~Obj()
Construct exception!
~MyException
*/
