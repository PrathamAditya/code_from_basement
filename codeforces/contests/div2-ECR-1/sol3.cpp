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
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int i = 0;
        int j = 1;
        int op = 0;
        while (i < n && j < n)
        {
            if (s[i] == ')' && s[j] == '(')
            {
                j++;
            }
            else
            {
                i = j + 1;
                j = 2 + j;
                op++;
            }
        }
        cout << op << " " << n - i << "\n";
    }
    return 0;
}