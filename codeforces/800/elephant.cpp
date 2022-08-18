#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        if (n - 5 < 0)
        {
            count++;
            break;
        }
        else
        {
            n = n - 5;
            count++;
        }
    }
    cout << count;
    return 0;
}