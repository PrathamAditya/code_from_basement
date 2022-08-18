/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#else
#endif

int getParity(int n)
{
    bool parity = 0;

    while (n)
    {
        parity = !parity;

        n = n & (n - 1);
    }
    return parity;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int x;
        cin >> x;
        cout << getParity(x) << endl;
    }

    return 0;
}