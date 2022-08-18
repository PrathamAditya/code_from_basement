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
        int l, r, a;
        cin >> l >> r >> a;

        if (l / a == r / a)
        {
            cout << r / a + r % a << endl;
        }
        else
        {

            cout << max(r / a + r % a, r / a - 1 + a - 1) << endl;
            // cout << max(r / a + r % a, (r - 1) / a + (r - 1) % a) << endl;
        }
    }

    return 0;
}