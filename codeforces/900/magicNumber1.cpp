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
    bool f = 1;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            if (s[i + 1] == '1' || s[i + 1] == '4')
            {
            }
            else
            {
                f = 0;
            }
        }
        else if (s[i] == '4')
        {
            if (s[i + 1] == '1' || s[i + 1] == '4')
            {
            }
            else
            {
                f = 0;
            }
        }
        if (f)
        {
            cout <<
        }
    }
    return 0;
}