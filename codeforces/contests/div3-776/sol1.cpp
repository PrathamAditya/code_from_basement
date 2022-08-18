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
        char c;
        cin >> c;
        int index = -1;
        int f = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                index = i;
            }
            if (index % 2 == 0)
            {
                f = true;
                cout << "YES" << endl;
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