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

    ll n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll s, t;
    cin >> s >> t;
    int r = min(s, t);
    t = max(s, t);
    s = r;
    int sum1 = 0, sum2 = 0;
    for (int i = s - 1; i < t - 1; i++)
    {
        if (i == n)
        {
            i = 0;
        }
        sum1 += a[i];
    }
    for (int i = t - 1; i < n; i++)
    {
        sum2 += a[i];
    }
    for (int i = 0; i < s - 1; i++)
    {
        sum2 += a[i];
    }

    cout << min(sum1, sum2);

    return 0;
}