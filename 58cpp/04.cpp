/*
 * 使用宏求变量和类型的大小
 * 2016年12月20日19:59:49
*/
#include <iostream>
#define sizeof_v(x) (char*)(&x+1)-(char*)(&x)
#define sizeof_t(t) (size_t)((t*)0+1) // 将0这个地址转换成t*地址偏移一个单位，再转换成整数
#define ALIGN(y,v) ((y+v-1)&~(v-1)) // 对齐宏
using namespace std;

class MyClass
{

};

int main()
{
    MyClass myClass;
    int n = 0;

    cout << "sizeof(myClass): " << sizeof(myClass) << endl;
    cout << "sizeof(n): " << sizeof(n) << endl;

    cout << "sizeof_v(n): " << sizeof_v(n) << endl;

    cout << "sizeof_t(int): " << sizeof_t(int) << endl;
    cout << "sizeof_t(MyClass): " << sizeof_t(MyClass) << endl;

    cout << ALIGN(4196, 4096) << endl;
    return 0;
}

/*
output:

sizeof(myClass): 1
sizeof(n): 4
sizeof_v(n): 4
sizeof_t(int): 4
sizeof_t(MyClass): 1
8192


*/
