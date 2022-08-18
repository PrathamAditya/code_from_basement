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

    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0;
    }
    else
    {
        int count = 0;
        while (a != b && (a > 0 && b > 0))
        {
            if (a > b)
            {
                if (a % 2 == 0)
                {
                    a = a / 2;
                    count++;
                }
                else if (a % 3 == 0)
                {
                    a = a / 3;
                    count++;
                }
                else if (a % 5 == 0)
                {
                    a = a / 5;
                    count++;
                }
                else
                {
                    break;
                    count = -1;
                }
            }
            else
            {
                if (b % 2 == 0)
                {
                    b = b / 2;
                    count++;
                }
                else if (b % 3 == 0)
                {
                    b = b / 3;
                    count++;
                }
                else if (b % 5 == 0)
                {
                    b = b / 5;
                    count++;
                }
                else
                {
                    break;
                    count = -1;
                }
            }
            if (a > 0 && b > 0 && count > 0)
            {
                cout << count;
            }
            else
            {
                cout << -1;
            }
        }

        return 0;
    }
}