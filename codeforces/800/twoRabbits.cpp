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
        int a, b, x, y;
        cin >> x >> y >> a >> b;

        if ((y - x) % (a + b) == 0)
        {
            cout << (y - x) / (a + b) << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}