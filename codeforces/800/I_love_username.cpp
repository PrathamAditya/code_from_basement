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
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int maxx = A[0];
    int minn = A[0];

    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (A[i] > maxx)
        {
            maxx = A[i];
            count++;
        }
        if (A[i] < minn)
        {
            minn = A[i];
            count++;
        }
    }
    cout << count << endl;

    return 0;
}