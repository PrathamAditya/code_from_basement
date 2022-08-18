#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << str[i + 1] - str[i];
    }
}