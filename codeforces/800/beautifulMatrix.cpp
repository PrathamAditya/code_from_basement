#include <iostream>
using namespace std;

int main()
{
    int A[6][6];
    int a = -1;
    int b = -1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> A[i][j];
            if (A[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    cout << abs(3 - a) + abs(3 - b) << endl;

    return 0;
}