#include <iostream>
using namespace std;

class Stack
{
    struct Link
    {
        int data_;
        Link* next_;
        Link(int data, Link* next) : data_(data), next_(next)
        {

        }
    };

public:
    Stack() : size_(0), head_(0)
    {

    }

    ~Stack()
    {
        Link* tmp;
        while (this->head_)
        {
            tmp = this->head_;
            this->head_ = this->head_->next_;
            delete tmp;
        }
    }

    bool IsEmpty()
    {
        return this->size_ == 0;
    }

    void Push(const int data)
    {
        Link* node = new Link(data, this->head_);
        this->head_ = node;
        ++this->size_;
    }

    bool Pop(int& data)
    {
        if (this->IsEmpty())
            return false;

        data = this->head_->data_;
        Link* tmp = this->head_;
        this->head_ = this->head_->next_;
        delete tmp;
        --this->size_;

        return true;
    }

private:
    int size_;
    Link* head_;
};

int main()
{
    Stack stack;

    for (int i = 0; i < 5; i++)
        stack.Push(i);

    int tmp;
    while (!stack.IsEmpty())
    {
        stack.Pop(tmp);
        cout << tmp << endl;
    }
    return 0;
}
