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

    ll A[n];
    ll B[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        cin >> B[i];
    }
    bool isR = false;
    bool isUn = true;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != B[i])
        {

            isR = true;
        }
    }

    bool isbb = false;
    for (int i = 0; i < n; i++)
    {
        int a = A[i];
        int b = B[i];
        for (int j = 0; j < n; j++)
        {
            if (i != j && a == B[j])
            {
                cout << "maybe";
                isbb = true;
                isR = false;
                isUn = false;
                break;
            }
        }
        if (isbb)
        {
            break;
        }
    }
    if (isR && isUn)
    {
        cout << "rated";
    }
    else if (isUn)
    {
        cout << "unrated";
    }
}