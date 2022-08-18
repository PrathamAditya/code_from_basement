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
int fun(int x)
{
    int xx = 0;
    for (int i = 1; i <= x; i++)
    {
        xx = xx + i;
    }
    return xx;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    int b;
    cin >> b;
    if (abs(a - b) % 2 == 0)
    {
        cout << fun(abs(a - b) / 2) * 2;
    }
    else
    {
        cout << fun(abs(a - b) / 2) * 2 + abs(a - b) / 2 + 1;
    }

    return 0;
}