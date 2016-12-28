#include <iostream>
using namespace std;

#define CALL_WITH_MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int a = 5;
//    int b = 0;
    int b = 10;

    CALL_WITH_MAX(++a, b);
    cout << a << " " << b << endl;

    return 0;
}
