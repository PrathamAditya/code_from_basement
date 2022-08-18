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
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    int steps = 0;
    if (abs(x1 - x2) < abs(y1 - y2))
    {
        steps = abs(x1 - x2);
        steps = steps + (abs(y1 - y2) - abs(x1 - x2));
    }
    else if (abs(x1 - x2) > abs(y1 - y2))
    {
        steps = abs(y1 - y2);
        steps = steps + (abs(x1 - x2) - abs(y1 - y2));
    }
    else
    {
        steps = abs(y1 - y2);
    }
    cout << steps;

    return 0;
}