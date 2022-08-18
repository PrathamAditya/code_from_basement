#include <bits/stdc++.h>
using namespace std;

int main()
{
    int long n;
    cin >> n;
    int long A[n];

    for (int long i = 1; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A + 1, A + n);
    for (int long i = 1; i < n; i++)
    {
        if (A[i] > i)
        {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}