#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int A[m];

    for (int i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    sort(A, A + m);
    int min = INT_MAX;
    int j = 0;
    int k = n - 1;
    while (j + k < m)
    {
        if (A[j + k] - A[j] < min)
        {
            min = A[j + k] - A[j];
        }
        j++;
    }
    cout << min << endl;
    return 0;
}