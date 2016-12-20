#include <iostream>

using namespace std;

class SingleTon
{
public:
    static SingleTon* GetInstance()
    {
        if (instance_ == NULL)
            instance_ = new SingleTon;
        return instance_;
    }
private:
    SingleTon() { cout << "SingleTon construct" << endl; }
    SingleTon(const SingleTon& other);
    SingleTon& operator = (const SingleTon& other);

    static SingleTon* instance_;
};

SingleTon* SingleTon::instance_;
int main(void)
{
    SingleTon* s1 = SingleTon::GetInstance();
    SingleTon* s2 = SingleTon::GetInstance();
    return 0;
}
