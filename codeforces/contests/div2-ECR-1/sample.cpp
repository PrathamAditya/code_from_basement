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
bool isPerfectSquare(long double x)
{

    if (x >= 0)
    {

        long long sr = sqrt(x);

        return (sr * sr == x);
    }

    return 0;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    double x = 99;

    if (isPerfectSquare(x))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}