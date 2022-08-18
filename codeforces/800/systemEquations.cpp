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
    int n;
    cin >> n;
    int dist[105];
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> dist[i];
        sum += dist[i];
    }
    int s, t;
    cin >> s >> t;

    int ans = 0;
    for (int i = (s < t ? s : t); i < (t > s ? t : s); ++i)
        ans += dist[i];

    cout << (sum - ans > ans ? ans : sum - ans) << endl;

    return 0;

    return 0;
}