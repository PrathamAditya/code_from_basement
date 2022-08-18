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
    int low = INT_MAX;
    int lowI = -1;
    int high = INT_MIN;
    int highI = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
        if (A[i] < low)
        {
            low = A[i];
            lowI = i;
        }
        if (A[i] > high)
        {
            high = A[i];
            highI = i;
        }
    }
    int p = 0;
    if (n % 2 == 0)
    {
        p = n / 2;
    }
    else
    {
        p = n / 2 + 1;
    }

    if (lowI <= p && highI <= p)
    {

        if (lowI < highI)
        {
            cout << n - lowI;
        }
        else
        {
            cout << n - highI;
        }
    }
    else if (lowI > p && highI > p)
    {
        if (lowI < highI)
        {
            cout << highI;
        }
        else
        {
            cout << lowI;
        }
    }
    else
    {
        if (lowI > highI)
        {
            cout << lowI - 1;
        }
        else
        {
            cout << highI - 1;
        }
    }

    return 0;
}