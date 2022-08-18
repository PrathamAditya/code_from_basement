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
    int k;
    cin >> n >> k;
    int sumL = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sumL = sumL + x;
        if (sumL <= 8)
        {
            k = k - sumL;
            sumL = 0;
            cnt++;
        }
        else
        {
            k = k - 8;
            sumL = sumL - 8;
            cnt++;
        }
        if (k <= 0)
        {
            break;
        }
    }
    if (k > 0)
    {
        cout << -1;
    }
    else
    {
        cout << cnt;
    }

    return 0;
}