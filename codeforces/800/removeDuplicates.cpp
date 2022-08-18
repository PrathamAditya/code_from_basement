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
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int a[1000 + 1] = {0};
    vector<int> v;

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[A[i]] == 0)
        {
            v.push_back(A[i]);
            a[A[i]] = -1;
        }
    }
    cout << v.size() << endl;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    return 0;
}