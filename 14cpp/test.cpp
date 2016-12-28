#include "test.h"
#include <iostream>
Test::Test() : n_(0)
{
    std::cout << "Construction" << std::endl;
}

Test::Test(int n) : n_(n)
{
    std::cout << "Transfor Construction" << std::endl;
}

Test::Test(const Test &other)
{
    this->n_ = other.n_;
    std::cout << "Copy Construction" << std::endl;
}

Test::~Test()
{
    std::cout << "~Test()" << std::endl;
}
