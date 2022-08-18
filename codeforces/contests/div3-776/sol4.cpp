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
void leftRotate(int A[], int ind, int n)
{
    int x[n + 1] = {0};
    for (int i = ind + 1; i <= n; i++)
    {
        x[i] = A[i];
    }
    for (int i = 1; i <= ind; i++)
    {
        x[i] = A[i];
    }
    for (int i = 1; i <= n; i++)
    {
        A[i] = x[i];
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt = 1;
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
        leftRotate(A, 4, n);
        for (int i = 1; i <= n; i++)
        {
            cout << A[i] << " ";
        }

        // for (int i = n; i >= 1; i--)
        // {

        // }
    }
    return 0;
}