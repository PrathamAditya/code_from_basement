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

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '8')
        {
            cnt++;
        }
    }
    if (n / 11 == 1 && cnt <= n / 11)
    {
        cout << cnt;
    }
    else
    {
        if (cnt > n / 11)
        {
            cout << n / 11;
        }
        else
        {
            cout << cnt;
        }
    }

    return 0;
}