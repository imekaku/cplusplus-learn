#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
//    ofstream fout;
//    fout.open("test.txt");
//    if (fout.is_open())
//        cout << "succ" << endl;
//    else
//        cout << "failed" << endl;
//    fout.close();

//    ofstream fout("test.txt");
//    fout << "abc" << " " << 200;
//    fout.close();

//    ifstream fin("test.txt");
//    string s;
//    int n;
//    fin >> s >> n;
//    cout << "s = " << s << " n = " << n << endl;

    ofstream fout("test.txt");
    char ch;
    for (int i = 0; i < 26; i++)
    {
        ch = 'A' + i;
        fout.put(ch);
    }
    fout.close();
    return 0;
}
