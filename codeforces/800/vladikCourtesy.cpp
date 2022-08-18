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
    int a;
    int b;
    cin >> a >> b;
    int s = 1;
    while (true)
    {
        if (a - s >= 0)
        {
            a = a - s;
            s++;
        }
        else
        {
            cout << "Vladik";
            break;
        }
        if (b - s >= 0)
        {
            b = b - s;
            s++;
        }
        else
        {
            cout << "Valera";
            break;
        }
    }

    return 0;
}