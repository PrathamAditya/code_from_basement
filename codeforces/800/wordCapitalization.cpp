#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    if (str[0] >= 97)
    {
        str[0] = str[0] - 32;
    }
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
    return 0;
}