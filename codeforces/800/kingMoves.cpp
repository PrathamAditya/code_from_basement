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
    char c, d;
    cin >> c >> d;
    int cnt = 0;
    if (c == 'a' || c == 'h')
        cnt++;
    if (d == '1' || d == '8')
        cnt++;
    if (cnt == 0)
    {
        cout << 8;
    }
    else if (cnt == 1)
    {
        cout << 5;
    }
    else if (cnt == 2)
        cout << 3;
}