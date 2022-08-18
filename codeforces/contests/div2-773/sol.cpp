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
        double d = 0;
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;

        if (x1 == 0 && x2 == 0 || x2 == 0 && x3 == 0 || x3 == 0 && x1 == 0)
        {
            cout << 1 << endl;
        }
        if (y1 == 0 && y2 == 0 || y3 == 0 && y1 == 0 || y2 == 0 && y3 == 0)
        {
            cout << d << endl;
        }
        }

    return 0;
}