#include <iostream>
#include <cassert>
using namespace std;

void func1(const int& tmp)
{
    cout << "func1 " << tmp << endl;
}

void func2(int tmp)
{
    cout << "func2 " << tmp << endl;
}

void func3(const int* tmp)
{
    cout << "func3 " << *tmp << endl;
}

int main()
{
    const int a = 10;
    int& b = const_cast<int&>(a);
    b = 20;
    cout << a << endl;
    cout << b << endl;

    assert(&a == &b); // 断言 a b地址是否相等

    func1(a);
    func2(a);
    func3(&a);

    return 0;
}

/*
output:

10
20
func1 20
func2 10
func3 20
*/
