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
    int r, c;
    cin >> r >> c;
    char A[r][c];
    bool f = false;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (A[i][j] == 'S')
            {
                if (i + 1 < r)
                {
                    if (A[i + 1][j] == 'W')
                    {
                        cout << "NO";
                        f = true;
                        break;
                    }
                }
                if (i - 1 >= 0)
                {
                    if (A[i - 1][j] == 'W')
                    {
                        cout << "NO";
                        f = true;
                        break;
                    }
                }
                if (j + 1 < c)
                {
                    if (A[i][j + 1] == 'W')
                    {
                        cout << "NO";
                        f = true;
                        break;
                    }
                }
                if (j - 1 >= 0)
                {
                    if (A[i][j - 1] == 'W')
                    {
                        cout << "NO";
                        f = true;
                        break;
                    }
                }
            }
        }
        if (f)
        {
            break;
        }
    }
    if (!f)
    {
        cout << "YES" << endl;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (A[i][j] == 'S')
                {
                    cout << A[i][j];
                }
                else if (A[i][j] == 'W')
                {
                    cout << A[i][j];
                }
                else
                {
                    cout << 'D';
                }
            }
            cout << endl;
        }
    }

    return 0;
}