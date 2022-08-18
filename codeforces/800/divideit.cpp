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
        ll n;
        cin >> n;

        int cnt = 0;
        int f = 1;

        while (n > 1)
        {
            if (n % 2 == 0)
            {
                n /= 2;
                cnt++;
            }
            else if (n % 3 == 0)
            {
                n = 2 * (n / 3);
                cnt++;
            }
            else if (n % 5 == 0)
            {
                n = 4 * (n / 5);
                cnt++;
            }
            else
            {
                // cout << n << endl;
                f = -1;
                break;
            }
        }
        if (f == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << cnt << endl;
        }

        // cout << cnt << endl;
    }

    return 0;
}