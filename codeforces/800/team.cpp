#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n][3];

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int c = 0;

        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
            if (A[i][j] == 1)
            {
                c++;
            }
        }
        if (c >= 2)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}