#include <iostream>
#include "string.h"

using namespace std;

int main()
{
    String A("AAAA");
    A.Display();

    String B(A); // 默认拷贝构造函数，浅拷贝，浅拷贝逐成员赋值
    B.Display();

    String C;
    C = B;
    C.Display();
    return 0;
}
