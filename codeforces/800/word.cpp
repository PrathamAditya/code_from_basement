/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

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
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] > 90)
        {
            count++;
        }
    }
    if (s.size() % 2 == 0)
    {
        if (count >= (s.size() / 2))
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] <= 90)
                {
                    char a = s[i] + 32;
                    cout << a;
                }
                else
                {
                    cout << s[i];
                }
            }
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] > 90)
                {
                    char a = s[i] - 32;
                    cout << a;
                }
                else
                {
                    cout << s[i];
                }
            }
        }
    }
    else
    {
        if (count > (s.size() / 2))
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] <= 90)
                {
                    char a = s[i] + 32;
                    cout << a;
                }
                else
                {
                    cout << s[i];
                }
            }
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] > 90)
                {
                    char a = s[i] - 32;
                    cout << a;
                }
                else
                {
                    cout << s[i];
                }
            }
        }
    }

        return 0;
}