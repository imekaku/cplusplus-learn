#include <iostream>
using namespace std;

class SingleTon
{
public:
    static SingleTon* GetInstance()
    {
        if (instance_ == NULL)
            instance_ = new SingleTon();
        return instance_;
    }

    ~SingleTon()
    {
        cout << "~SingleTon" << endl;
    }

    class Garbo
    {
    public:
        ~Garbo()
        {
            if (SingleTon::instance_ != NULL)
                delete SingleTon::instance_;
        }
    };

private:
    SingleTon() { cout << "SingleTon Construction" << endl; }
    SingleTon(const SingleTon& other);
    SingleTon& operator = (const SingleTon& other);

private:
    static SingleTon* instance_;
    static Garbo garbo_; // 必须是静态，因为如果不是非静态的，那么会被初始化
};

SingleTon::Garbo SingleTon::garbo_;
SingleTon* SingleTon::instance_;

int main()
{
    SingleTon* s1 = SingleTon::GetInstance();
    SingleTon* s2 = SingleTon::GetInstance();
    return 0;
}

/*
 * 单例模式
 *
 * 定义一个静态成员变量，使用该静态成员变量实现单例模式
 * 但是，该静态变量不会在程序结束后销毁
 *
 * 提供一个嵌套类，实现结束后调用析构函数
*/
