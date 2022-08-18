/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long int
using namespace std;
const string V = "aeiou";

bool vowel(char c)
{
    bool b = 0;
    for (int i = 0; i < V.size(); i++)
    {
        if (c == V[i])
        {
            b = 1;
               }
    }
    return b;
}

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
    cout << s[0];
    for (int i = 1; i < n; i++)
        if (!vowel(s[i - 1]) || !vowel(s[i]))
            cout << s[i];
    cout << endl;

    return 0;
}