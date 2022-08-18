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
    int n, k;
    cin >> n >> k;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int comp = A[k - 1];
    // cout << comp << endl;
    sort(A, A + n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] >= comp && A[i] > 0)
        {

            count++;
        }
    }
    cout << count << endl;

    return 0;
}