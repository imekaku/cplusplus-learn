#ifndef COUNTOBJECT_H
#define COUNTOBJECT_H


class CountObject
{
public:
    CountObject();
    ~CountObject();
    static int GetCount();
private:
    static int count_; // 静态成员的引用性声明，还需要定义性的声明
};

#endif // COUNTOBJECT_H
