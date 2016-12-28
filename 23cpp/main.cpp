#include <iostream>
#include "integer.h"
#include "string.h"

using namespace std;

int main()
{
//    String s1("ABC");
//    String s2(s1);

//    String s3;
//    s3 = s1;

//    s3.Display();
//    s2.Display();
//    s1.Display();


//    const String s4("ABC");
//    cout << s4[1] << endl;


//    String s1 = "ABC";
//    String s2 = "DEF";
//    String s3;
//    s3 = s1 + s2;
//    s3.Display();

    String s1 = "ABC";
    String s2 = "DEF";
    s1 += s2;
    s1.Display();

    cout << s1 << endl;


    String s3;
    cin >> s3;
    cout << s3 << endl;
    return 0;
}


//int main()
//{
//    Integer it1(5);
//    it1.Display();

//    Integer it2 = ++it1;
//    it2.Display();
//    it1.Display();

//    Integer it3 = it1++;
//    cout << &it3 << endl;
//    it1.Display();
//    it3.Display();
//    return 0;
//}
