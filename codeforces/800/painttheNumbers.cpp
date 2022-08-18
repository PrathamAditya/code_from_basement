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

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    sort(A, A + n);
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (A[j] % A[i] == 0)
                {
                    A[j] = -1;
                }
            }
            k++;
        }
    }
    cout << k;
    // vector<int> v;

    // int n;
    // cin >> n;
    // int cnt = 0;
    // int smallest = INT_MAX;
    // if (n == 1)
    // {
    //     int a;
    //     cin >> a;
    //     cout << 1;
    // }
    // else
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         int x;
    //         cin >> x;
    //         v.push_back(x);
    //         smallest = min(x, smallest);
    //     }
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         int a = smallest;
    //         for (int j = 0; j < v.size(); j++)
    //         {
    //             if (v[j] % smallest == 0)
    //             {
    //                 v[j] = -1;
    //             }
    //         }
    //         smallest++;
    //     }
    //     cout << cnt;
    // }

    return 0;
}