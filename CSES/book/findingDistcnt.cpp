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

    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        int A[n];

        int maxx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            maxx = max(A[i], maxx);
        }
        int arr[maxx + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            arr[A[i]]++;
        }

        for (int i = 0; i < maxx + 1; i++)
        {
            if (arr[i] > 1)
            {
                cout << "BC not diff" << endl;
                break;
            }
            else
            {
            }
        }
    }

    return 0;
}