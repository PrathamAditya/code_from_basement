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

    int A[n][n];
    int ii[n] = {0};
    int jj[n] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)

        {
            cin >> A[i][j];
            if (A[i][j] == 1 || A[i][j] == 3)
            {
                ii[i] = 1;
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (A[i][j] == 1 || A[i][j] == 3)
            {
                jj[j] = 1;
            }
        }
    }
    int indexI = 0;
    int indexJ = 0;
    for (int i = 0; i < n; i++)
    {
        if (!ii[i])
        {
            indexI++;
        }
        if (!jj[i])
        {
            indexJ++;
        }
    }
    if (indexI == indexJ)
    {
        cout << indexI << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (!ii[i])
        {
            cout << i + 1 << " ";
        }
    }
    return 0;
}