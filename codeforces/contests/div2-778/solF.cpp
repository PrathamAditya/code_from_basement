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
    int n;
    cin >> n;

    string s;
    cin >> s;

    ll p = pow(2, n);

    for (int i = 0; i < s.length(); i++)
    {
        int c = i ^ (p - 1);
        cout << s[c];
    }
    return 0;
}