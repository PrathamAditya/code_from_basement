#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int x = (a * b) * 2;
        while (true)
        {
            if (sqrt(x) == x / sqrt(x))
            {
                cout << x << endl;
                break;
            }
            else
            {
                x++;
            }
        }
    }
    return 0;
}