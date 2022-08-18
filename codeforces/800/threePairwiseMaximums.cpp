#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // int t;
    // cin >> t;

    // while (t--)
    // {
    //     int A[3];
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cin >> A[i];
    //     }
    //     sort(A, A + 3);
    //     if (A[1] != A[2])
    //     {
    //         cout << "NO" << endl;
    //     }
    //     else
    //     {
    //         cout << "YES" << endl;
    //         cout << A[0] << " " << A[0] << " " << A[2] << endl;
    //     }
    // }
    // return 0;
    int t;
    cin >> t;

    while (t--)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
            cin >> a[i];

        sort(a, a + 3);

        if (a[1] != a[2])
            cout << "NO" << endl;
        else
            cout << "YES\n"
                 << a[0] << " " << a[0] << " " << a[2] << endl;
    }
}
