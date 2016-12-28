#include "countobject.h"

int CountObject::count_ = 0; // 类静态成员的定义性声明

CountObject::CountObject()
{
    ++count_;
}

CountObject::~CountObject()
{
    --count_;
}

int CountObject::GetCount()
{
    return count_;
}
