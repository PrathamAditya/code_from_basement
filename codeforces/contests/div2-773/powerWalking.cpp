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
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int d = 0;
        sort(A, A + n);
        for (int i = 0; i < n; i++)
        {
            if (A[i] != A[i + 1])
            {
                d++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i <= d - 1)
            {
                cout << d << " ";
            }
            else
            {
                d++;
                cout << d << " ";
            }
        }
        cout << endl;
    }

    return 0;
}