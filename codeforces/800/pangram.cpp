/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

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

    int A[26] = {0};

    for (int i = 0; i < n; i++)
    {
        if (s[i] - 'a' >= 0)
        {
            A[s[i] - 'a'] = 1;
        }
        else
        {
            A[s[i] - 'A'] = 1;
        }
    }

    int temp = 1;
    for (int i = 0; i < 26; i++)
    {
        if (A[i] == 0)
        {
            temp = 0;
        }
    }
    if (temp == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}