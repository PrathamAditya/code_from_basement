#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int j;
        int k;
        cin >> j >> k;
        if ((k - j) >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}