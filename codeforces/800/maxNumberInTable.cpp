#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n][n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        A[0][i] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                A[i][j] = 1;
            }
            else
            {
                A[i][j] = A[i - 1][j] + A[i][j - 1];
            }
        }
    }
    cout << A[n - 1][n - 1] << endl;
    return 0;
}