#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        int keyValue = x;
        for (int i = 1; i <= n; i++)
        {
            if (x < 1 || x < floor(x / 2) + 10)
            {
                break;
            }
            else
            {
                x = floor(x / 2) + 10;
            }
        }
        for (int i = 1; i <= m; i++)
        {

            x = x - 10;
            // cout << n << endl;
        }

        if (x > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}