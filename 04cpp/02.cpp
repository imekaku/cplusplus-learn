#include <iostream>
using namespace std;

// 引用作为函数的返回值
int a[] = {1,2,3};
int& func(int i)
{
    return a[i];
}

int main()
{
    func(2) = 100; // 函数放在赋值运算符的左边，引用在函数返回的时候初始化
                    // func(2)函数在返回的时候被初始化为a[2]
                    // func(2)被赋值为100，a[2]被初始化我100
    cout << a[2] << endl;
    return 0;
}
