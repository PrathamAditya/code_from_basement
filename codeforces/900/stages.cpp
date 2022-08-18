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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    sort(s.begin(), s.end());
    int ans = 0;
    int len = 0;
    char last = 'a' - 2;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= last + 2)
        {
            last = s[i];
            ans = ans + s[i] - 'a' + 1;
            len++;
        }
        if (len >= k)
        {
            cout << ans, exit(0);
        }
    }
    cout << -1;

    return 0;
}