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
    int n, m;
    cin >> n >> m;
    int minI = INT_MAX, maxI = INT_MIN, minJ = INT_MAX, maxJ = INT_MIN;

    char A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
            if (A[i][j] == '*')
            {
                minI = min(minI, i);
                minJ = min(minJ, j);
                maxI = max(maxI, i);
                maxJ = max(maxJ, j);
            }
        }
    }
    bool ist = true;

    for (int i = minI; i <= maxI; i++)
    {
        for (int j = minJ; j <= maxJ; j++)
        {

            cout << A[i][j];
        }
        cout << endl;
    }

    return 0;
}