#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        long long int i = 3;
        bool ist = false;
        if (n == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (i; i * i < 100000000000000; i = i + 2)
            {
                if (n % i == 0)
                {
                    cout << "YES" << endl;
                    break;
                }
            }
        }
        if (i == 100000000000000 - 1)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}