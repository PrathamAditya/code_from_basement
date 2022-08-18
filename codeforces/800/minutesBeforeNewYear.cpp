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
        int h, m;
        cin >> h >> m;

        // if (m == 0)
        // {
        //     cout << (24 - h) * 60 << endl;
        // }
        // else
        {
            cout << (23 - h) * 60 + (60 - m) << endl;
        }
    }

    return 0;
}