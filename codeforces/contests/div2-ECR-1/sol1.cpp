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
bool isP(long double x)
{

    if (x >= 0)
    {

        long long sr = sqrt(x);

        return (sr * sr == x);
    }

    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int x, y;
        cin >> x >> y;

        if (x == 0 && y == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (isP(x * x + y * y))
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}