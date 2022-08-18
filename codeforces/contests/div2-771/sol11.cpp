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

    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        int A[n + 1];
        int a = -1;
        int b = -1;
        for (int i = 1; i <= n; i++)
        {
            cin >> A[i];
            if (A[i] != i)
            {
                a = i;
            }
        }
    }

    return 0;
}