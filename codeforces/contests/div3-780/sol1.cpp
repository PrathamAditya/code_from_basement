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
    int tt = 0;
    cin >> tt;

    while (tt--)
    {
        int a, b;
        cin >> a >> b;

        if (a == 0 && b > 0)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << a * 1 + b * 2 + 1 << "\n";
        }
    }
    return 0;
}