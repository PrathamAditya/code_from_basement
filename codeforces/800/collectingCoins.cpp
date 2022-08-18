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
        int a[3];
        int a, b, c, n;
        cin >> a[0] >> a[1] >> a[2] >> n;
        sort(a, a + n);

        n = n - (2 * a[2] + a[1] + a[0]);
        if (n < 0 || n % 3 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}