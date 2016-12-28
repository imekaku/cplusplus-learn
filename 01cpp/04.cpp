#include <iostream>
#include <cassert>
using namespace std;

#pragma pack(4)
struct Test
{
    char a;
    double b;
    char c;
};
#pragma pack()

int main()
{
    cout << sizeof(Test) << endl; // output : 16

    Test t;
    assert((char *)&t == (char *)&t.a); // 断言没有问题
    // 第一个成员和结构体变量的偏移量为0
    return 0;
}
