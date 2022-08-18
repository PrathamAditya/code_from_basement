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
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        int A[n];
        int nZ = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            if (A[i] == 0)
            {
                nZ++;
            }
        }
        if (nZ == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int l = 0;
            int r = n - 1;

            while (A[l + 1] != 0)
                l++;
            while (A[r - 1] != 0)
                r--;
            cout << r - l << endl;
        }
    }

    return 0;
}