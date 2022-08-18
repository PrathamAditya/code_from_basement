#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << (n == 1 || (n == 2 && s[0] != s[1]) ? "YES" : "NO") << "\n";
    }
    return 0;
}