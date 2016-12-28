#include <iostream>

using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Test Construction" << endl;
    }

    /*explicit*/ Test(int n) : n_(n)
    {
        cout << "Test Construction n" << endl;
    }

    Test& operator = (const Test& other)
    {
        cout << "Test operator =" << endl;
        this->n_ = other.n_;
        return *this;
    }

    ~Test()
    {
        cout << "~Test" << endl;
    }

private:
    int n_;

//    const int a_;
};

int main()
{
    Test t1 = 20; // 这里的=不是运算符，此时编译器对这个=有特殊的解释，相当于 Test t1(20);
//    t1.operator=(30);

    return 0;
}

/*
output:

Test Construction n
Test Construction n
*/

/*
 * 带一个参数的构造函数：
 * 1、充当转换构造函数，将20这个整数，转换成类类型。生成一个临时对象，赋值给t对象，调用等号=运算符
 * 2、充当普通构造函数
*/
