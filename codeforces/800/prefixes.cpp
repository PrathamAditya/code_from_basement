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
    string str;
    for (int i = 1; i < n; i = i + 2)
    {
        if (s[i] == 'a')
        {
            if (s[i - 1] == 'a')
            {
                cnt++;
                s[i - 1] = 'b';
            }
        }
        else
        {
            if (s[i - 1] == 'b')
            {
                cnt++;
                s[i - 1] = 'a';
            }
        }
    }
    cout << cnt << "\n";
    cout << s;

    return 0;
}