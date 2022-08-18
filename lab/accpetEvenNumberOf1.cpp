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

    string s;
    cin >> s;
    int cnt = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
    }
    if (cnt % 2 == 0)

    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}