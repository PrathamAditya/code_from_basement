#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int i = 0;
        if (n == 1)
        {
            cout << n << endl;
        }
        else
        {
            while (n > 0)
            {
                if (i % 3 == 0 || i % 10 == 3)
                {
                    if (i != 0)
                    {
                        i++;
                    }
                }
                else
                {
                    i++;
                    n--;
                }
            }
            cout << i << endl;
        }
    }

    return 0;
}