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
    int tt;
    cin >> tt;

    while (tt--)
    {
        string s;
        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            for (int j = i + 1; j < s.length(); j++)
            {
                if (s[j] == c)
                {
                    s[i] = '.';
                }
            }
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '.')
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}