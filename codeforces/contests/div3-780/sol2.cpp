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
        int n;
        cin >> n;

        int A[n];

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        if (n == 1 && A[0] > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(A, A + n);
            if (A[n - 1] - A[n - 2] > 1)
            {
                cout << "NO"
                     << "\n";
            }
            else
            {
                cout << "YES"
                     << "\n";
            }
        }
    }
    return 0;
}