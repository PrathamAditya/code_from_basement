#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        if (x == 1 || x == 2)
        {
            cout << 0 << endl;
        }
        else
        {
            if (x % 2 == 0)
            {
                cout << x / 2 - 1 << endl;
            }
            else
            {
                cout << x / 2 << endl;
            }
        }
    }
    return 0;
}