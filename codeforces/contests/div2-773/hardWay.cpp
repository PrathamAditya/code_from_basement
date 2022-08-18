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
    int tt;
    cin >> tt;
    while (tt--)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        int ans = 0;
        if (y1 == y2 && y3 < y1)
        {
            ans = abs(x1 - x2);
        }
        else if (y2 == y3 && y1 < y2)
        {
            ans = abs(x2 - x3);
        }
        else if (y3 == y1 && y2 < y3)
        {
            ans = abs(x3 - x1);
        }
        cout << ans << endl;
    }

    return 0;
}