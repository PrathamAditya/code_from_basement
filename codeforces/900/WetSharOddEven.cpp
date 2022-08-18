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
    ll n;
    cin >> n;

    ll sum = 0;
    ll A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];

        sum += A[i];
    }
    sort(A, A + n);
    if (sum % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((sum - A[i]) % 2 == 0)
            {
                sum = sum - A[i];
                break;
            }
        }
        cout << sum;
    }

    return 0;
}