#include <iostream>
#include <cassert>

using namespace std;

int main()
{
//    const int var1 = 100;
//    const int& ref1 = var1;

//    int var1 = 100;
//    const int& ref1 = var1;

//    cout << ref1 << endl;
//    var1 = 200;

//    ref1 = 500; // error
//    cout << ref1 << endl;

    double var = 3.14;
    const int& ref = var; // int tmp = var; const int& ref = tmp;
    cout << "var = " << var << endl;
    cout << "ref = " << ref << endl;
    assert((char *)&var == (char *)&ref);

//    int& ref1 = var; // error
    /*
     * ref 和 var 共享同一个地址空间
    */

//    int a = 100;
//    const int& b = a;
//    assert((char *)&a == (char *)&b);

    return 0;
}

/*
 * 引用不是变量
 * 引用仅仅是变量才别名
 * 引用没有自己独立的空间
 * 引用需要和它所引用的变量共享空间
 *
 * 变量：名称，空间
 *
 * 对引用的改变就是对它引用的变量做的改变
 *
 * 引用在定义的时候需要进行初始化
 * 引用一经初始化，不能重新指向其他变量
 *
 *
 * 非const 引用不能指向一个const对象
*/
