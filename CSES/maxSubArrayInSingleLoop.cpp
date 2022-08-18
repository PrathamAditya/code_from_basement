#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int ms = 0;
    int cs = 0;
    for (int i = 0; i < n; i++)
    {

        cs = cs + A[i];
        if (cs < 0)
        {
            cs = 0;
        }
        ms = max(cs, ms);
    }
    cout << ms << endl;
    return 0;
}