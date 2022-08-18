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
    int q;
    cin >> q;
    int A[n + 1];
    for (int i = 1; i <= n; i++)
    {
        A[i] = -1;
    }

    while (q--)
    {
        int t;
        cin >> t;

        if (t == 0)
        {
            int l, r, x;
            cin >> l >> r >> x;

            if (x == 1)
            {
                for (int i = l; i <= r; i++)
                {
                    if (A[i] == -1)
                    {
                        A[i] = x;
                    }
                }
            }
            else
            {
                for (int i = l; i <= r; i++)
                {
                    A[i] = 0;
                }
            }
        }
        if (t == 1)
        {
            int j;
            cin >> j;
            if (A[j] == -1)
            {
                cout << "N/A" << endl;
            }
            else if (A[j] == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}