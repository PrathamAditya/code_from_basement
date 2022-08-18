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
    int length = s.size();
    int uppr = 0;
    int small = 0;
    int num = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] > 48 && s[i] < 59)
        {
            num++;
        }
        if (s[i] >= 97 && s[i] <= 122)
        {
            uppr++;
        }
        if (s[i] >= 65 && s[i] <= 90)
        {
            small++;
        }
    }

    if (num >= 1 && small >= 1 && uppr >= 1 && length >= 5)
    {
        cout << "Correct";
    }
    else
    {
        cout << "Too weak";
    }

    return 0;
}