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
    int k;
    cin >> n >> k;
    string s;
    string a = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < n; i++)
    {
        s = s + a[i % k];
    }
    cout << s;

    return 0;
}