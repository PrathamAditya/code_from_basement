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

        int long long A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        sort(A, A + n);

        cout << A[n - 1] + A[n - 2] << endl;
    }
    return 0;
}