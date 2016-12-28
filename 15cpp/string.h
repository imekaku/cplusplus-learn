#ifndef STRING_H
#define STRING_H


class String
{
public:
    String(char* str = (const_cast<char*>("")));
    String(const String& other);
    ~String();
    void Display();
    String& operator=(const String& other);

private:
    char* AllocAndCopy(const char* str);
    char* str_;
};

#endif // STRING_H
