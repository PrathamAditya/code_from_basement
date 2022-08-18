#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int A[t];
    for (int i = 0; i < t; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (A[i] % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
