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

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A, A + n);

    if (A[0] == 0 && A[n - 1] == 0)
    {
        cout << 0;
    }
    else if (n == 1)
    {
        cout << 0;
    }
    else
    {

        int count = 0;
        bool ist = true;
        int i = 0;
        while (i < n)
        {

            if (A[i] > 0 && A[i] == A[i + 1] && A[i] == A[i + 2])
            {
                cout << -1;
                ist = false;
                break;
            }

            else if (A[i] > 0 && A[i] == A[i + 1])
            {
                count++;
                i = i + 2;
            }
            else
            {
                i++;
            }
        }
        if (ist)
        {
            cout << count;
        }
    }

    return 0;
}