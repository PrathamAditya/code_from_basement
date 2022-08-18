/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using bc = int;

#ifdef LOCAL
#else
#endif
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int a, b;
    // cin >> a >> b;

    // string s;
    // cin >> s;

    // cout << a << " " << b << " " << s << endl;

    // string s;
    // getline(cin, s);

    // cout << s << endl;
    // cout << s.size() << endl;

    // int x;
    // while (cin >> x)
    // {
    //     cout << x << endl;
    // }

    // long long a = 123456789;

    // long long b = a * a;

    // cout << b << endl;

    // calculate the n fac using the moduls
    int n;
    cin >> n;
    long long x = 1;
    for (int i = 1; i <= n; i++)
    {
        x = (x * i) % 7;
    }
    cout << x << "\n";

    return 0;
}