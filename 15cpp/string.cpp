#include "string.h"
#include <cstring>
#include <iostream>
using namespace std;

String::String(char* str)
{
    this->str_ = this->AllocAndCopy(str);
}

void String::Display()
{
    cout << this->str_ << endl;
}

String::~String()
{
    delete[] this->str_;
}

String::String(const String &other)
{
    this->str_ = this->AllocAndCopy(other.str_);
}

char* String::AllocAndCopy(const char *str)
{
    int length = strlen(str) + 1;
    char* tmp = new char[length];
    memset(tmp, 0, length);
    strcpy(tmp, str);
    return tmp;
}

String& String::operator =(const String& other)
{
    if (this == &other)
        return *this;
    this->str_ = this->AllocAndCopy(other.str_);
    return *this;
}
