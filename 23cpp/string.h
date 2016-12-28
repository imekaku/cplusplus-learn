#ifndef STRING_H
#define STRING_H

#include <iostream>
using namespace std;
class String
{
public:
    /*explicit*/ String(const char* str = ""); // 防止转换构造函数 String s = "XXX"; 情况
    String(const String& other);
    ~String();

    String& operator =(const String& other);
    String& operator =(const char* str);
    bool operator !() const; // 如果该字符串的长度为0，那么!就返回真
    char& operator [](unsigned int index); // 返回引用指向实际的空间，可以出现在等号的左边，s[2] = 'c';
    const char& operator [](unsigned int index) const; // 应该使用非const 函数调用const函数，避免代码重复
    String& operator +=(const String& s);

    friend String operator +(const String& s1, const String& s2);
    friend ostream& operator <<(ostream&os, const String& s); // 流运算符的重载只能使用友元的方式重载，因为第一个参数是是流变量
    friend istream& operator >>(istream&is, String& s); // 重载

    void Display() const;

private:
    String& Assign(const char* str);
    char* AllocAndCopy(const char* str); // 拷贝，分配字符串空间
    char* str_;
};

#endif // STRING_H
