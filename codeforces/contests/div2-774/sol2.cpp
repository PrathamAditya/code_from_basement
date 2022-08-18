/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long int
using namespace std;
int arraySum(int a[], int n)
{
    int initial_sum = 0;
    return accumulate(a, a + n, initial_sum);
}

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

        sort(A, A + n);
        if (A[0] == A[n - 1])
        {
            cout << "NO" << endl;
        }
        else
        {
            int m = n / 2;
            int count = m + 1;
            int s1 = arraySum(A, count);
            int s2 = arraySum(A, n);
            if (s1 < (s2 - s1) && count > (n - count))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}