// A. Odd Set
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        int a = 0;
        cin >> n;
        for (int i = 0; i < n * 2; i++)
        {
            cin >> x;
            if (x % 2 == 1)
            {
                a++;
            }
        }
        if (a == n)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}