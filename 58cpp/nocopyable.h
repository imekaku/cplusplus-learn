#ifndef NOCOPYABLE_H
#define NOCOPYABLE_H
#include <iostream>

class Nocopyable
{
public:
    Nocopyable()
    {
        std::cout << "Nocopyable" << std::endl;
    }

    ~Nocopyable()
    {
        std::cout << "~Nocopyable" << std::endl;
    }

private:
    Nocopyable(const Nocopyable&) { std::cout << "Copy construction" << std::endl; }
    const Nocopyable& operator= (const Nocopyable&) { std::cout << "Operator= construction" << std::endl; }
};

class Parent : private Nocopyable
{
public:
    Parent()
    {
        std::cout << "Parent Construction" << std::endl;
    }
    Parent(const Parent& other) /*: Nocopyable(other)*/
      // 如果不调用基类的拷贝构造函数，那么基类的禁止拷贝构造函数就会失灵
    {
        std::cout << "Parent Copy Construction" << std::endl;
    }
};

#endif // NOCOPYABLE_H
