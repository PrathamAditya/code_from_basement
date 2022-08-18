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
    int n;
    cin >> n;

    int A[n];
    int place = 0;
    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] > maxx)
        {
            place = i;
            maxx = A[i];
        }
    }

    sort(A, A + n);

    cout << place + 1 << " " << A[n - 2];

    return 0;
}