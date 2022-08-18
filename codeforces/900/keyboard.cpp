#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    int move = 1;
    if (c == 'R')
    {
        move = -1;
    }
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = s[s.find(str[i]) + move];
    }
    cout << str << endl;
    return 0;
}