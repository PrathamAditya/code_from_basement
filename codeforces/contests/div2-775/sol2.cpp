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
        ll n;
        cin >> n;

        ll A[n];
        ll sum = 0;
        ll m = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            sum = sum + A[i];
            m = max(m, A[i]);
        }
        sort(A, A + n);
        if (A[0] == A[n - 1])
        {
            if (A[n - 1] == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else if (m * 2 <= sum)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << m * 2 - sum << endl;
        }
    }

    return 0;
}