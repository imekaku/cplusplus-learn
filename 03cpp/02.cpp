#include <iostream>
using namespace std;


#ifdef __cplusplus
extern "C"
{
#endif
//extern "C" void fun(int a, int b)
void fun(int a, int b)
{
    cout << "fun(int a, int b)" << endl;
}

//extern "C" void fun(double a, double b)
void fun2(double a, double b)
{
    cout << "fun(double a, double b)" << endl;
}
#ifdef __cplusplus
}
#endif

//void fun(int a);

int main()
{
    fun(3, 4);
    fun2(3.3, 4.4);

    return 0;
}

/*
 * 函数重载，静态多态，静态联编，编译时刻确定函数的入口地址
 * 派生类和基类之间，通过虚函数实现，动态多态，动态联编，运行时刻确定函数的入口地址
 *
 *
 * name managling 名字改编
 * 改编之后的重载函数的函数名是不同的
 *
 * extern "C" 表示不对名字进行改编，如果不进行名字改编，就无法实现函数重载
 * C语言不支持函数重载
*/
