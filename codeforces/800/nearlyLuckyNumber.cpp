#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    while (n > 0)
    {
        int x;
        x = n / 10;

        if (x == 4 || x == 7)
        {
            count++;
        }
        n = n / 10;
    }
    cout << count << endl;
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}