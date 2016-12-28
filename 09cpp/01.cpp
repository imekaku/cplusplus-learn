#include <iostream>
using namespace std;

class Tmp01
{
public:
    void Display();

//private:
    int a_;
    int b_;
    int c_;
};

void Tmp01::Display()
{
    cout << this->a_ << " " << this->b_ << " " << this->c_ << endl;
}

struct Tmp02
{
public:
    void Display();

//private:
    int a_;
    int b_;
    int c_;
};

void Tmp02::Display()
{
    cout << this->a_ << " " << this->b_ << " " << this->c_ << endl;
}

int main()
{
    Tmp01 var1 = { 1, 2, 3 };
    Tmp02 var2 = { 4, 5, 6 };

    var1.Display();
    var2.Display();
    return 0;
}
