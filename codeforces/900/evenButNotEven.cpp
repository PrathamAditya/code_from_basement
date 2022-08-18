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

        ll s;
        cin >> s;

        if (s == 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            ll i = 1;
            ll sum = 0;
            ll sumsum = 0;

            while (n--)
            {
                ll x = s % 10;
                s = s / 10;
                sumsum += x;
                x = x * i;
                i = i * 10;
                sum = sum + x;
                if (sumsum % 2 == 0 && sum % 2 != 0)
                {
                    cout << sum << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}