#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A, A + n);
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        if (A[i] < 0)
        {
            sum = sum + A[i];
        }
    }
    cout << -sum << endl;
}