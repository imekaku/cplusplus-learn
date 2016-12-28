/*
 * 单例模式
 * 2016年12月20日17:29:59
*/

#include <iostream>
#include <memory>

using namespace std;

class SingleTon
{
public:
    static SingleTon* GetInstance()
    {
        // if (instance_ == NULL)
        //   instance_ = new SingleTon;
        // return instance_;

        if (!instance_.get())
            instance_ = auto_ptr<SingleTon>(new SingleTon); // 智能指针可以释放改资源
        return instance_.get(); // 返回instance_.get();并没有返回instance的指针的所有权
        // return instance_.release(); // release()方法返回指针的所有权
    }
    ~SingleTon() { cout << "~SingleTon" << endl;/* delete instance_; */}

private:
    SingleTon() { cout << "SingleTon construct" << endl; }
    SingleTon(const SingleTon& other);
    SingleTon& operator = (const SingleTon& other);

    // static SingleTon* instance_;
    static auto_ptr<SingleTon> instance_;
};

auto_ptr<SingleTon> SingleTon::instance_;
int main(void)
{
    SingleTon* s1 = SingleTon::GetInstance();
    SingleTon* s2 = SingleTon::GetInstance();
    return 0;
}

/*
 * output:
 *
SingleTon construct
*/

/*
 * static SingleTon* instance_; 指针最后没有被销毁
*/

/*
SingleTon construct
~SingleTon

使用智能指针可以在指针的生命周期结束之后，释放指针
*/
