#include <iostream>
#include <cassert>
using namespace std;

void fun(int& tmp_var)
{
    cout << tmp_var << endl;
}

int main()
{
    const int var1 = 100;
    int* p = const_cast<int*>(&var1);
    *p = 200;

    assert(p == &var1); // p 存放的地址和var1的地址是相同的
    cout << "*p = " << *p << endl;
    cout << "var1 = " << var1 << endl;
    // 相同的地址中却存放着不同的内存，这样是不符合规则的
    // 所以*p 取出的内容到底是什么呢？为什么不是p指向的地址呢.

    fun(const_cast<int&>(var1)); // 一个临时值是200
    return 0;
}

/*
output:

*p = 200
var1 = 100
200
*/
