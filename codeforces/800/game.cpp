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

    int n1, n2, k1, k2;

    cin >> n1 >> n2 >> k1 >> k2;

    while (true)
    {
        if (n1 - 1 >= 0)
        {
            n1 = n1 - 1;
        }
        else
        {
            cout << "Second";
            break;
        }

        if (n2 - 1 >= 0)
        {
            n2 = n2 - 1;
        }
        else
        {
            cout << "First";
            break;
        }
    }
    return 0;
}