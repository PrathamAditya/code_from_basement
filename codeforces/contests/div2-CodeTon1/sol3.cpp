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

        bool isOne = false;
        bool isZero = false;

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            if (A[i] == 1)
            {
                isOne = true;
            }
            if (A[i] == 0)
            {
                isZero = true;
            }
        }
        sort(A, A + n);

        if (A[0] == A[n - 1])
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            if (isOne && isZero)
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