#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        string s;
        s = str[1];
        if (s == "+")
        {
            x++;
        }
        if (s == "-")
        {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}