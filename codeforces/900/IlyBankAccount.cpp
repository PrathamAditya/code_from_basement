#include <iostream>
using namespace std;

int main()
{
    int long n;
    cin >> n;
    if (n > 0)
    {
        cout << n << endl;
    }
    else
    {

        cout << max(n / 10, (n / 100) * 10 + n % 10) << endl;
    }
    return 0;
}