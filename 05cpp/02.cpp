/*
 * 转型操作
 * 2016年12月22日17:28:58
*/

#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    const int var1 = 100;
    // int var2 = const_cast<int>(var1); // error, 不能进行转换

    int* p = const_cast<int*>(&var1);
    cout << "*p = " << *p << endl;
    *p = 200;
    cout << "*p = " << *p << endl;
    cout << "var1 = " << var1 << endl;

    cout << p << endl;
    cout << &var1 << endl;
    assert(p == &var1); // 断言没有错误
    cout << *p << endl;
    return 0;
}

/*
 * 使用const_cast并不是为了修改const限定的值
*/
