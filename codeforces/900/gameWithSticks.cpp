#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int s = 0;
    if (n > m)
    {
        s = m;
    }
    else
    {
        s = n;
    }
    if (s % 2 == 0)
    {
        cout << "Malvika" << endl;
    }
    else
    {
        cout << "Akshat" << endl;
    }
    return 0;
}