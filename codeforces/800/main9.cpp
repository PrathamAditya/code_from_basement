// Sum of 2050
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int go = 1;
        int check = 0;
        int count = 0;
        while (go)
        {
            n = n - 2050;
            if (n >= 2050)
            {
                count++;
            }
            else if (n == 0)
            {
                check = 1;
            }
            else
            {
                go = 0;
            }
        }
        if (check == 1)
        {
            cout << count + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}