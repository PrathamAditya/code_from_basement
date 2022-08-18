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
        int l;
        int r;
        int a;
        cin >> l >> r >> a;

        if (r % a == 0)
        {
            cout << (r - 1) / a + (r - 1) % a << endl;
        }
        else
        {
            cout << (r) / a + (r) % a << endl;
        }
    }

    return 0;
}