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

    int A[n][n];
    int B[n] = {0};
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x = 0;
            cin >> x;
            if (x == 1 || x == 3)
            {
                B[i] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (!B[i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < n; i++)
    {
        if (!B[i])
        {
            cout << i + 1 << " ";
        }
    }

    return 0;
}