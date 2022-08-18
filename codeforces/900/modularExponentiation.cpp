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
    int n = 0;
    int m = 0;
    cin >> n >> m;
    ll sum = 1;
    bool f = false;

    while (n--)
    {
        if (sum * 2 <= m)
        {
            sum = sum * 2;
        }
        else
        {
            f = true;
            break;
        }
    }
    if (f)
    {
        cout << m;
    }
    else
    {
        cout << m % sum;
    }

    return 0;
}