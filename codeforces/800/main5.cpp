// A. Perfectly Imperfect Array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int f = 1;
        while (n--)
        {

            cin >> a;
            int temp = sqrt(a);
            if (temp * temp != a)
            {
                f = 0;
            }
        }
        puts(f ? "NO" : "YES");
    }
}
