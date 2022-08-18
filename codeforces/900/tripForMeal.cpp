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
    int A[3];
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans = 0;
    int pos = 0;

    if (n == 1)
    {
        cout << 0;
    }
    else
    {
        n = n - 1;
        while (n--)
        {
            if (pos == 0)
            {
                if (a > b)
                {
                    pos = 1;
                    ans = ans + b;
                }
                else
                {
                    pos = 2;
                    ans = ans + a;
                }
            }
            else if (pos == 1)
            {
                if (b > c)
                {
                    pos = 2;
                    ans = ans + c;
                }
                else
                {
                    pos = 0;
                    ans = ans + b;
                }
            }
            else if (pos == 2)
            {
                if (a > c)
                {
                    pos = 1;
                    ans = ans + c;
                }
                else
                {
                    pos = 0;
                    ans = ans + a;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}