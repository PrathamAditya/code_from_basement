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
    int flag = 0;
    int cur = 1;
    for (int i = 0; i < s.size()-1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cur++;
        }
        else
        {
            cur = 1;
        }
        if (cur >= 7)
        {
            flag = 1;
            cout << "YES";
            break;
        }
    }
    if (!flag)
    {
        cout << "NO";
    }

    return 0;
}