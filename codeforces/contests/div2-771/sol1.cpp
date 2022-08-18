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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int s = INT_MAX;
        int sec = INT_MAX;

        int secIndex = -1;
        int sIndex = -1;

        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            if (A[i] < s)
            {
                s = A[i];
                sIndex = i;
            }
            if (A[i] < sec && A[i] > s)
            {
                secIndex = i;
                sec = A[i];
            }
        }
        // cout << sec << " " << secIndex << endl;
        // cout << s << " " << sIndex << endl;
        if (n == 1)
        {
            cout << A[0] << endl;
            continue;
        }
        if (A[0] != 1)
        {
            for (int i = sIndex; i > -1; i--)
            {
                cout << A[i] << " ";
            }
            if (sIndex < n)
            {
                for (int i = sIndex + 1; i < n; i++)
                {
                    cout << A[i] << " ";
                }
            }
        }
        else
        {
            cout << A[0] << " ";
            for (int i = secIndex; i > 0; i--)
            {
                cout << A[i] << " ";
            }
            if (secIndex < n)
            {
                for (int i = secIndex + 1; i < n; i++)
                {
                    cout << A[i] << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}