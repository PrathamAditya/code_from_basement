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

    int A[n + 1];
    int iMin;
    int iMax;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] == 1)
        {
            iMin = i + 1;
        }
        if (A[i] == n)
        {
            iMax = i + 1;
        }
    }

    cout << max({abs(iMin - 1), abs(iMax - 1), abs(iMax - n), abs(iMin - n)});

    return 0;
}