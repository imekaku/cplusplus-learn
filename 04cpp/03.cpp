#include <iostream>
using namespace std;

int& add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int var1 = add(1, 2);
    int& var2 = add(3, 4);
    /*
     * var2 是引用，没有自己独立的地址空间
     * var2所引用的变量的生命期结束了，var2是一个无效的引用,var2的值是不确定的
    */

    cout << var2 << endl; // var2所引用的变量虽然生命期结束了，但是该变量仍然可能存在
    cout << var1 << endl; // var1可能存在覆盖了该局部变量
    cout << var2 << endl;
    return 0;
}

/*
 * 值传递，实参需要初始化形参,需要分配空间，实参拷贝到形参
 *
 * 引用传递，实参初始化形参，不需要分配空间
 *
 * 指针传递，实参需要初始化形参,需要分配空间，指针传递的本质仍然是值传递
*/
