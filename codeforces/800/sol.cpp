/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#else
#endif
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int long long a, b;
    cin >> a >> b;

    int long long x, y, z;
    cin >> x >> y >> z;

    int long long yellow = (2 * x + 1 * y) - a;
    int long long blue = (1 * y + 3 * z) - b;
    int long long ans = 0;
    if (yellow > 0)
    {
        ans = ans + yellow;
    }
    if (blue > 0)
    {
        ans = ans + blue;
    }
    cout << ans;

    return 0;
}