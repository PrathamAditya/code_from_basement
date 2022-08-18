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
        int n, B, x, y;
        cin >> n >> B >> x >> y;
        ll sum = 0;
        int a = 0;

        for (int i = 0; i < n; i++)
        {
            int aa = a;
            if (aa + x <= B)
            {
                aa = aa + x;
                sum = sum + aa;
            }
            else
            {
                aa = aa - y;
                sum = sum + aa;
            }
            a = aa;
        }
        cout << sum << endl;
    }
    return 0;
}