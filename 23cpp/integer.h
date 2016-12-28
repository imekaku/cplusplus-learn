#ifndef INTEGER_H
#define INTEGER_H


class Integer
{
public:
    Integer(int n);
    ~Integer();

    Integer(const Integer& integer);
    Integer& operator ++();
    Integer operator ++(int i);
//    friend Integer& operator ++(Integer& integer);

    void Display();

private:
    int n_;
};

#endif // INTEGER_H
