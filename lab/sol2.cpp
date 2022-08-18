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

    if (s[0] == '/' && s[1] == '/')
    {
        cout << "Single line comment" << endl;
    }
    else if (s[0] == '/' && s[1] == '*' && s[s.size() - 1] == '/' && s[s.size() - 2] == '*')
    {
        cout << "Double line comment" << endl;
    }
    else
    {
        cout << "Not a commment" << endl;
    }

    return 0;
}