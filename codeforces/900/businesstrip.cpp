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
    int k;
    cin >> k;

    int A[12] = {0};
    int s = 0;

    for (int i = 0; i < 12; i++)
    {
        cin >> A[i];
        s = s + A[i];
    }
    if (k == 0)
    {
        cout << 0;
    }
    else if (k > s)
    {
        cout << -1;
    }
    else
    {
        sort(A, A + 12);
        int sum = 0;

        for (int i = 11; i >= 0; i--)
        {
            sum = sum + A[i];
            if (sum >= k)
            {
                cout << 12 - i;
                break;
            }
        }
    }
    return 0;
}