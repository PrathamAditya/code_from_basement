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
    int n;
    int d;
    cin >> n >> d;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(A[i] - A[j]) <= d)
            {

                cnt++;
            }
        }
    }
    cout << cnt * 2 << endl;

    return 0;
}