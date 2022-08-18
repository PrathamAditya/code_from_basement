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

        int long long A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            int x = 1;
            int y = 1;

            if (A[i] || A[i + 1] == A[i] || A[i] || A[i + 1] == A[i + 1])
            {
                A[i + 1] = 0;
            }
            else
            {
                int aa = A[i] || A[i + 1];
                int bb = x || y;
                while (aa != bb)
                {
                    x++;
                    y++;
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += A[i];
        }
        cout << sum << endl;
    }

    return 0;
}