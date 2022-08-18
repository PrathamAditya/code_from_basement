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

        if (s.length() == 1)
        {
            cout << s << endl;
        }
        else
        {
            int c = 0;

            while (true)
            {
                int prev = c;
                for (int i = c + 1; i < s.length(); i++)
                {
                    if (s[c] == s[i])
                    {
                        c++;
                    }
                }
                if (c == prev)
                    break;
            }
            for (int i = c; i < s.length(); i++)
            {
                cout << s[i];
            }
            cout << endl;
        }
    }
    return 0;
}