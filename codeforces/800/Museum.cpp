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

    int t = 0;
    char ii = 'a';
    for (int i = 0; i < s.size(); i++)
    {
        int temp = abs(s[i] - ii);

        if (temp > 13)
        {
            temp = 26 - temp;
        }
        t = t + temp;
        ii = s[i];
    }
    cout << t;

    return 0;
}