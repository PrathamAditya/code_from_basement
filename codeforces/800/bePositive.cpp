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

    float a[n];
    int zeroCnt = 0;
    int negativeCnt = 0;
    int positiveCnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
        {
            positiveCnt++;
        }
        else if (a[i] < 0)
        {
            negativeCnt++;
        }
    }
    if (positiveCnt * 2 >= n)
    {
        cout << 1;
    }
    else if (negativeCnt * 2 >= n)
    {
        cout << -1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}