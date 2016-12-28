#include <iostream>
#include "test.h"

using namespace std;

Test Func(const Test& t)
{
    return t;
}

int main()
{
    Test t1(10); // 调用转换构造函数
    Test t2 = Func(t1);    // 返回t,调用拷贝构造函数,临时对象被t2接管了，变成了有名对象

    cout << "main() end" << endl;
    return 0;
}

/*
 * 当函数的返回值是类对象，函数执行完成返回调用者时候使用拷贝构造函数。
 *
 * 因为需要构造一个临时对象，再返回调用者。
 * 不会直接返回局部对象，因为局部对象再离开建立它的函数时候就消亡了。
 *
 * 编译系统会调用函数表达式中创建的一个无名临时对象，该临时对象的生存周期只在函数调用出
 * 的表达式中，所谓的return 对象。
 *
 * 实际上是对用拷贝构造函数吧该对象的值拷贝如临时对象。
 * return返回值是变量，处理过程类似，只是不调用拷贝函数。
*/
