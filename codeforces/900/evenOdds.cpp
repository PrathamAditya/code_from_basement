#include <iostream>
using namespace std;

int main()
{
    long long int n, k, xx = 0;

    cin >> n >> k;

    if (n % 2 == 0)
    {
        xx = n / 2;
    }
    else
    {
        xx = n / 2 + 1;
    }

    if (k <= xx)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - xx) * 2 << endl;
    }

    return 0;
}