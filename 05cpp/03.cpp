#include <iostream>
#include <cassert>
using namespace std;

//void func(const int& var)
//{
//    cout << "func 1" << endl;
//    cout << var << endl;
//}

void func(const int var)
{
    cout << "func 3" << endl;
    cout << var << endl;
}

//void func(int& var)
//{
//    cout << "func 2" << endl;
//    cout << var << endl;
//}

int main()
{
    int const var1 = 100;
    int* point = const_cast<int*>(&var1);
    assert(point == &var1);

    *point = 200;

    assert(point == &var1);
    cout << *point << endl;
    cout << var1 << endl;

//    func(var1);
    func(var1);
    func(const_cast<int&>(var1));

    cout << var1 << endl;
    return 0;
}
