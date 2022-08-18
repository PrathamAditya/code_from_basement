#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int A[4];
        int a;
        int b;
        for (int i = 0; i < 4; i++)
        {
            cin >> A[i];
        }
        if (A[0] > A[1])
        {
            a = A[0];
        }
        else
        {
            a = A[1];
        }

        if (A[2] > A[3])
        {
            b = A[3];
        }
        else
        {
            b = A[2];
        }

        if (a > b)
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