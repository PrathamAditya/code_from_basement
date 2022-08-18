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

void compare(int x, int y)
{
    if (x == y || abs(x - y) == 1)
    {
        cout << "YES" << endl;
    }
    else

    {
        cout << "NO" << endl;
    }
}
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

        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            v.push_back(x);
        }
        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else if (n == 2)
        {
            compare(A[0], A[1]);
        }
        return 0;
    }
}