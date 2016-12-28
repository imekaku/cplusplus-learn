#include <iostream>
#include "countobject.h"

using namespace std;

class Test
{
public:
    static const int n_ = 100;
};

//const int Test::n_ = 100;

int main()
{
    // cout << CountObject::count_ << endl;


    cout << CountObject::GetCount() << endl;
    CountObject obj1;
    cout << CountObject::GetCount() << endl;
    return 0;
}
