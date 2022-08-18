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
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '-')
        {
            ans = ans - 1;
        }
        if (ans < 0)
        {
            ans = 0;
        }
        if (s[i] == '+')
        {
            ans = ans + 1;
        }
    }
    cout << ans;

    return 0;
}