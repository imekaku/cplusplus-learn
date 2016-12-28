#include <iostream>

using namespace std;

class Outer
{
public:
    Outer()
    {
        cout << "Outer Construction" << endl;
    }

    void func()
    {
        inner.func();
//        inner.inner_a_ = 3;
    }

//protected:
    class Inner
    {
    public:
        Inner()
        {
            cout << "Inner Construction" << endl;
        }

        void func();
//        {
//            cout << "Inner func" << endl;
//        }

    private:
        int inner_a_;
    };

private:
    Inner inner;
};

void Outer::Inner::func()
{

}

int main(void)
{
//    Outer outer;
//    outer.func();

    Outer::Inner inner;
    inner.func();
    return 0;
}

/*
 * 前向声明中的类，不能定义对象，必须是引用或者指针
*/
