#include <iostream>

using namespace std;

class Test
{
public:
    Test(int n) : n_(n)
    {
        cout << "Test Constructor " << this->n_ << endl;
    }

private:
    const int n_;
};

int main()
{
    Test t(10);

    return 0;
}
