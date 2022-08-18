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

    string t;
    cin >> t;

    bool b = true;
    for (int i = 0, j = t.size() - 1; i < t.size(); j--, i++)
    {
        if (s[i] != t[j])
        {
            b = false;
        }
    }
    if (b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}