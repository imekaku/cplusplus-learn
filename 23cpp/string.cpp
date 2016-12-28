#include "string.h"
#include <string.h>

String::String(const char* str)
{
    this->str_ = this->AllocAndCopy(str);
}

String::String(const String &other)
{
    this->str_ = this->AllocAndCopy(other.str_);
}

String::~String()
{
    delete[] this->str_;
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
    return this->Assign(other.str_);
}

String& String::operator =(const char* str)
{
    return this->Assign(str);
}

String& String::Assign(const char *str)
{
    delete[] this->str_;
    this->str_ = this->AllocAndCopy(str);
    return *this;
}

bool String::operator !() const
{
    return (strlen(this->str_) != 0);
}

char& String::operator [](unsigned int index)
{
    // return this->str_[index];
    return const_cast<char&>(static_cast<const String&>(*this)[index]);
}

const char& String::operator [](unsigned int index) const
{
    return this->str_[index];
}

String operator +(const String& s1, const String& s2)
{
    /*
    int length = strlen(s1.str_) + strlen(s2.str_) + 1;
    char* tmpStr = new char[length];
    memset(tmpStr, 0, length);
    strcpy(tmpStr, s1.str_);
    strcat(tmpStr, s2.str_);

    String tmpString(tmpStr);
    delete tmpStr;
    return tmpString;
    */

    String tmpString = s1;
    tmpString += s2;
    return tmpString;
}

String& String::operator +=(const String& other)
{
    int length = strlen(this->str_) + strlen(other.str_) + 1;
    char* tmpStr = new char[length];
    memset(tmpStr, 0, length);
    strcpy(tmpStr, this->str_);
    strcat(tmpStr, other.str_);

    delete[] this->str_;
    this->str_ = tmpStr;
    return *this;
}

void String::Display() const
{
    cout << this->str_ << endl;
}

ostream& operator <<(ostream&os, const String& s)
{
    os<<s.str_;
    return os;
}

istream& operator >>(istream&is, String& s)
{
    /*
    is>>s.str_;
    return is;
    */

    char tmp[1024];
    cin >> tmp;
    s.str_ = tmp;
    return is;
}
