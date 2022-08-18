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
        int r, g, b;
        cin >> r >> g >> b;
        int s = r + g + b;
        int x = max(r, max(g, b));
        int y = min(r, min(g, b));
        s = s - (x + y);
        if (x == y || (s + y) >= x - 1 && (s + y) <= x * 2)
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << "No"
                 << "\n";
        }
    }
    return 0;
}