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
    getline(cin, s);

    if (s.size() > 8)
    {
        if (n <= 29)
        {
            cout << 12;
        }
        else if (n > 28 && n <= 30)
        {
            cout << 11;
        }
        else
        {
            cout << 7;
        }
        return 0;
    }
    else
    {

        if (n == 5 || n == 6)
        {
            cout << 53;
        }
        else
        {
            cout << 52;
        }
    }

    return 0;
}