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
        bool t = true;

        if (s.size() == 1)
        {
            cout << "accepted" << endl;
        }
        else if (s == "abb")
        {
            cout << "accepted" << endl;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'b')
                {
                    for (int j = i + 1; j < s.size(); j++)
                    {
                        if (s[j] != 'b')
                        {
                            t = false;
                            break;
                        }
                    }
                    if (!t)
                    {
                        break;
                    }
                }
            }
            if (t)
            {
                if ((s.size() * 97))
                    cout << "accepted" << endl;
            }
            else
            {
                cout << "not accepted" << endl;
            }
        }
    }

    return 0;
}