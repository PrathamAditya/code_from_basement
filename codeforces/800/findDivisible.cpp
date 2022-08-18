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
    int cnt = 0;

    while (tt--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
        {
            cout << a << " " << b << endl;
        }
        else
        {
            // while (true)
            // {
            //     if (a % b == 0 && a != b)
            //     {
            //         cout << a << " " << b << endl;
            //         break;
            //     }
            //     else
            //     {
            //         if (cnt % 2 == 0)
            //         {
            //             a++;
            //             cnt++;
            //         }
            //         else
            //         {
            //             b--;
            //             cnt++;
            //         }
            //     }
            // }
            cout << a << " " << a * 2 << endl;
        }
    }

    return 0;
}