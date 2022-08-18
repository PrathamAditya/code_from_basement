#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    int i = 1;
    int j = 1;
    int max = INT_MIN;
    while (j < n)
    {
        if (A[i] <= A[j])
        {
            j++;
        }
        else
        {
            if (j - i > max)
            {
                max = j - i;
            }
            i = j;
        }
    }
    cout << j - i << endl;
    return 0;
}