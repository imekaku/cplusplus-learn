#ifndef TEST_H
#define TEST_H


class Test
{
public:
    Test();
    Test(int n);
    Test(const Test& other);
    ~Test();

private:
    int n_;
};

#endif // TEST_H
