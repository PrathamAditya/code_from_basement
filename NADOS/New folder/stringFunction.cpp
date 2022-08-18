#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    string s;
    getline(cin, str);
    for (int i = str.length() - 1; i >= 0; i--)
    {
        getline(str[i], s[i]);
    }
    return 0;
}