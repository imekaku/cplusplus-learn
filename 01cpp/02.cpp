#include <iostream>
#include <string>
using namespace std;

#define STR(a) #a
#define CAT(x, y) x##y

int main()
{
    int xy = 100;
    cout << STR(ABCD) << endl; // #ABCD <=> "ABCD"
    cout << CAT(x, y) << endl; // x##y <=> xy

    string str_s = STR(ABCD);
    cout << str_s << endl;
    return 0;
}
