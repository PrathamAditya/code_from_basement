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
        int indexSmall;
        int elementSmall = INT_MAX;
        int indexLarge;
        int elementLarge = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            if (A[i] > elementLarge)
            {
                elementLarge = A[i];
                indexLarge = i;
            }
            if (A[i] < elementSmall)
            {
                elementSmall = A[i];
                indexSmall = i;
            }
        }

        if (indexLarge == indexSmall)
        {
            cout << 1 << " " << 1 << "\n";
        }
        else
        {
            cout << indexSmall + 1 << " " << indexLarge + 1 << "\n";
        }
    }
    return 0;
}