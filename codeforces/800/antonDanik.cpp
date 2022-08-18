#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;
    int d = 0;
    int a = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton";
    }
    else if (d > a)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;
}