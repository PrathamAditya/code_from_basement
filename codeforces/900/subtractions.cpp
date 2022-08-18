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
        int a, b;
        cin >> a >> b;
        int ans = 0;
        while (a && b)
        {
            if (a < b)
            {
                swap(a, b);
            }
            ans = ans + a / b;
            a = a % b;
        }
        cout << ans << endl;
    }

    return 0;
}