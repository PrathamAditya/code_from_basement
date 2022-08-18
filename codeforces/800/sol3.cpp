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
    getline(cin, s);
    if (s[s.size() - 2] == 'a' || s[s.size() - 2] == 'e' || s[s.size() - 2] == 'i' || s[s.size() - 2] == 'o' || s[s.size() - 2] == 'u')
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}