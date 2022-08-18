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
    int i = 0;
    bool f = 1;

    while (i < s.length())
    {
        if (s[i] == '1')
        {
            if (s[i + 1] == '4')
            {
                if (s[i + 2] == '4')
                {
                    i = i + 3;
                }
                else
                {
                    i = i + 2;
                }
            }
            else
            {
                i++;
            }
        }
        else
        {
            f = 0;
            break;
        }
    }
    if (f)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}