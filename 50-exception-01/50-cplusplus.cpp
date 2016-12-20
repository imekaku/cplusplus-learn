#include <iostream>
using namespace std;

double Divide(double a, double b)
{
    if (b == 0.0)
        throw 1;
    else
        return a/b;
}

int main()
{
    try
    {
        cout << "This is the try "<<endl;
        Divide(5.0, 0.0);
        // C++ 异常处理可以避免C语言中一层一层的判断返回
    }
    catch (int)
    {
        cout << "This is the catch "<<endl;
    }

    return 0;
}
