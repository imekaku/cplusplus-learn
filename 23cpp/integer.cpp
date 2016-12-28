#include "integer.h"
#include <iostream>
using namespace std;

Integer::Integer(int n) : n_(n)
{

}

Integer::Integer(const Integer &integer)
{
    this->n_ = integer.n_;
    cout << "Copy Construction Function" << endl;
}

Integer::~Integer()
{
    cout << "~Integer" << endl;
}

Integer& Integer::operator ++()
{
    cout << "Member function overload" << endl;
    ++this->n_;
    return *this;
}

void Integer::Display()
{
    cout << this->n_ << endl;
}

//Integer& operator ++(Integer& integer)
//{
//    cout << "Friend function overload" << endl;
//    ++integer.n_;
//    return integer;
//}

Integer Integer::operator ++(int i)
{
    Integer tmp(this->n_);
    ++this->n_;
    cout << &tmp << endl;
    return tmp;
}
