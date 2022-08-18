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
        int m = INT_MIN;
        int l = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            m = max(m, A[i]);
            l = min(l, A[i]);
        }
        int count = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (A[i] > A[i - 1] && A[i] > A[i + 1])
            {
                count++;
                A[i + 1] = max(A[i], A[i + 2]);
            }
        }
        cout << count << endl;

        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }
    }
}
//  if ((A[0] > A[1]) && A[0] < m)
//             {
//                 A[0] = m;
//                 count++;
//             }
//             if ((A[n - 2] > A[n - 1]) && A[n - 1] < m)
//             {
//                 A[n - 1] = m;
//                 count++;
//             }