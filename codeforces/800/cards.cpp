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
    int Max = INT_MIN, Min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] > Max)
        {
            Max = A[i];
        }
        if (A[i] < Min)
        {
            Min = A[i];
        }
    }
    int sum = Max + Min;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (A[i] + A[j] == sum && A[i] > 0 && A[j] > 0)
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    A[i] = -1;
                    A[j] = -1;
                }
            }
        }
    }

    return 0;
}