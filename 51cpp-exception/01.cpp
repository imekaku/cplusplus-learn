/*
C++ 异常处理
2016年12月20日15:15:29
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

double Divide(double a, double b)
{
    if (b == 0)
    {
        // MyException e("divide by zero"); // 调用构造函数
        // throw e; // 调用拷贝构造函数，抛出，e的生命周期结束，调用析构函数（局部对象销毁）
        // 异常发生之前创建的局部对象被销毁，这个过程被称为栈展开
        // 此调用链上创建的局部对象都将会被销毁

        // throw 1;
        // 抛出int类型异常

        // throw 1.0
        // 抛出double类型异常

        throw MyException("divide by zero");
        /*
         * 不会调用拷贝构造函数
         *
         * output:
        This is the MyException Construct!
        divide by zero
        ~MyException
        */
    }
    else
        return a/b;
}

int main(void)
{
    try
    {
        cout << Divide(5.0, 0.0) << endl;
    }
    catch (MyException& e)
    {
        cout << e.what() << endl; // 打印出异常信息
    }
    catch (int)
    {
        cout << "The int exception" << endl;
        // int类型异常不能被double异常捕获，不做类型转换
    }
    catch (double)
    {
        cout << "The double exception" << endl;
    }
    catch (...) // 捕获所有的异常
    {
        cout << "Other exception" << endl;
    }

    // 被抛出的异常对象e的生命周期结束，调用析构函数
    return 0;
}

/*
output:

This is the MyException Construct!
This is the MyException Copy Construct!
~MyException
divide by zero
~MyException
*/
