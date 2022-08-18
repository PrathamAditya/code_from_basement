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
    int n, b, d;
    cin >> n >> b >> d;

    int A[n];
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] <= b)
        {
            if (sum + A[i] <= d)
            {
                sum = sum + A[i];
            }
            else
            {
                cnt++;
                sum = 0;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}