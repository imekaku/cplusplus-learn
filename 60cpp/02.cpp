#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Test() Construction" << endl;
    }

    Test(const Test& other)
    {
        this->n_ = other.n_;
        cout << "Test() Copy Construction" << endl;
    }

    ~Test()
    {
        cout << "~Test() Desconstruction" << endl;
    }

    void Display() const
    {
        cout << "The Test() Display" << endl;
    }

private:
    int n_;
};

//void Say(const Test t) // 调用拷贝构造函数
void Say(const Test& t) // 使用引用即使用同一空间，不会调用拷贝构造函数
{
    t.Display();
}

int main()
{
    Test t; // 调用构造函数
    Say(t);
    return 0;
}
