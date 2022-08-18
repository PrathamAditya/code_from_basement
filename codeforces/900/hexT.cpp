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

int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2 || n == 3)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int fibb(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm = t1 + t2;
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
        }
        return t2;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0;
    cin >> n;
    cout << 0 << " " << 0 << " " << n;

    return 0;
}