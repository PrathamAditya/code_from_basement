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
    int A[n + 1];
    for (int i = 1; i <= n; i++)
    {
        A[i] = -1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 0)
        {
            int l;
            int x;
            int r;
            cin >> l >> r >> x;
            if (x == 1)
            {
                for (int i = l; i <= r; i++)
                {
                    if (A[i] != 0)
                    {
                        A[i] = 1;
                    }
                }
            }
            if (x == 0)
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
            else if (A[j] == 1)
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}