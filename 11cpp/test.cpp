#include "test.h"
#include <iostream>

Test::Test()
{
    std::cout << "Test() Construction" << std::endl;

    Test::n_ = 10;
}
