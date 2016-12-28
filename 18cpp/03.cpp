#include <iostream>
using namespace std;

class SingleTon
{
public:
    static SingleTon& GetInstance()
    {
        static SingleTon instance_; // 有状态的
        return instance_;
    }

    ~SingleTon()
    {
        cout << "~SingleTon" << endl;
    }

private:
    SingleTon() { cout << "SingleTon Construction" << endl; }
    SingleTon(const SingleTon& other);
    SingleTon& operator = (const SingleTon& other);

};

int main()
{
    SingleTon& s1 = SingleTon::GetInstance();
    SingleTon& s2 = SingleTon::GetInstance();
    return 0;
}


