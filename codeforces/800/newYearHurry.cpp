#include <iostream>
using namespace std;

int main()
{
    int k;
    int n;
    cin >> n >> k;
    int dif = 240 - k;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        dif = dif - 5 * i;
        if (dif < 0)
        {
            break;
        }
        count++;
    }
    cout << count << endl;

    return 0;
}