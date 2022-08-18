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
    int A[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            A[i][j] = 1;
        }
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            int x;
            cin >> x;
            if (x % 2 != 0)
            {
                A[i][j] = !A[i][j];
                A[i + 1][j] = !A[i + 1][j];
                A[i - 1][j] = !A[i - 1][j];
                A[i][j + 1] = !A[i][j + 1];
                A[i][j - 1] = !A[i][j - 1];
            }
        }
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }
    return 0;
}