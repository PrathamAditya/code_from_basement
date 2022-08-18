/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long int
using namespace std;

#ifdef LOCAL
#else
#endif
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            cout << 2 << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                int cnt = 0;
                while (n > 0)
                {
                    if (cnt % 2 == 0)
                    {
                        cout << 1;
                        n--;
                        cnt++;
                    }
                    else
                    {
                        cout << 2;
                        n = n - 2;
                        cnt++;
                    }
                }
                cout << endl;
            }
            else
            {
                int cnt = 0;
                while (n > 0)
                {
                    if (cnt % 2 == 0)
                    {
                        cout << 2;
                        n = n - 2;
                        cnt++;
                    }
                    else
                    {
                        cout << 1;
                        n--;
                        cnt++;
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}