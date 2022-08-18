#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int n;
        // cin >> n;
        // int c1, c2, rem, r;

        // if (n == 1)
        // {
        //     c1 = 1;
        //     c2 = 0;
        //     std::cout << c1 << " " << c2 << std::endl;
        //     continue;
        // }
        // c2 = (n / 2);
        // rem = n - c2;
        // c1 = (c2 / 2 + rem) / 2;
        // c2 = c2 + (rem - c1) / 2;
        // while (c1 - c2 > 2)
        // {
        //     c1 = c1 - 2;
        //     c2 = c2 + 1;
        // }
        // // if (c1 - c2 == 2)
        // // {
        // //     c2 = c2 + 1;
        // //     c1 = c1 - 2;
        // // }

        // std::cout << c1 << " " << c2 << std::endl;
        int n;
        cin >> n;
        cout << n / 3 + (n % 3 == 1) << " " << n / 3 + (n % 3 == 2) << endl;
    }
}