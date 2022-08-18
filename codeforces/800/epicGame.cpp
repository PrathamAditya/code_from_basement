/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

using namespace std;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

#ifdef LOCAL
#else
#endif
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, n;
    cin >> a >> b >> n;

    int count = 1;
    int left = 0;

    while (true)
    {
        if (count % 2 == 0)
        {

            n = n - gcd(b, n);
            if (n < 0)
            {
                break;
            }
        }
        else
        {
            n = n - gcd(a, n);
            if (n < 0)
            {
                break;
            }
        }
        count++;
    }
    if (count % 2 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }

    return 0;
}