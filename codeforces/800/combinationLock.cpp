/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

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

    string a;
    cin >> a;
    string b;
    cin >> b;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (abs(a[i] - b[i]) > 5)
        {
            count = count + (10 - abs(a[i] - b[i]));
        }
        else
        {
            count = count + abs(a[i] - b[i]);
        }
    }
    cout << count;

    return 0;
}