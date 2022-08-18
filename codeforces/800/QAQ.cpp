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
        if (s[i] == 'Q')
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] == 'A')
                {
                    for (int k = j + 1; k < s.size(); k++)
                    {
                        if (s[k] == 'Q')
                        {
                            count++;
                        }
                    }
                }
            }
        }
    }

    cout << count;

    return 0;
}