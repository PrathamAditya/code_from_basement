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
    string str;
    cin >> str;
    int i = 0;
    int j = 0;

    while (j < str.length())
    {
        if (s[i] == str[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    cout << i + 1;
    return 0;
}