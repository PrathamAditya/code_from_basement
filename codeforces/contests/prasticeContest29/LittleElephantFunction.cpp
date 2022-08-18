/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#else
#endif

void fun(int n)
{
    if (n == 1)
    {
        cout << 1;
    }
    else
    {
        cout << n << " ";
        fun(n - 1);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    fun(n);

    return 0;
}