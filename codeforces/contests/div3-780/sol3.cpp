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
            bool f = true;
            for (int j = i + 1; j < s.length(); j++)
            {
                if (s[i] == s[j])
                {
                    f = false;
                }
            }
            if (f)
            {
                s.erase(i, 1);
            }
        }
        cout << s << endl;

        // // sort(s.begin(), s.end());
        // int cnt = 0;

        // int i = 0;

        // while (i < s.length())
        // {
        //     if (s[i] != s[i + 1])
        //     {
        //         s.erase(i, 1);
        //         cnt++;
        //     }
        //     i = i + 2;
        // }
        // cout << s << endl;
    }
    return 0;
}