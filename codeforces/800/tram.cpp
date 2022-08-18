#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[2];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> A[j];
            if (j == 0)
            {
                sum = sum - A[j];
            }
            else
            {
                sum = sum + A[j];
                if (sum >)
            }
        }
    }
    return 0;
}