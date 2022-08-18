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
        char c;
        cin >> s;
        cin >> c;
        int f = 0;

        int index = -1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                index = i;
            }
            if (index % 2 == 0)
            {
                cout << "YES" << endl;
                f = 1;
                break;
            }
        }
        if (!f)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}