#include <iostream>
#include "test.h"

using namespace std;

int Test::n_;
int main()
{
    Test t;

    cout << Test::n_ << endl;
    return 0;
}
