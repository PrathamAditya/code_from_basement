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
    char s1 = '.';
    string s2 = "-.";
    string s3 = "--";

    for (int i = 0; i < s.size();)
    {
        if (s[i] == 46)
        {
            cout << 0;
            i++;
        }
        else
        {
            if (s[i + 1] == 45)
            {
                cout << 2;
            }
            else
            {
                cout << 1;
            }
            i = i + 2;
        }
    }

    return 0;
}