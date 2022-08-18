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
    if (n == 1)
    {
        cout << s;
    }
    else
    {
        cout << 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {

                cout << s[i];
            }
        }
    }

    return 0;
}