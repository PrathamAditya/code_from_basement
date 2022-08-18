#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[101] = {0};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A[x]++;
    }
    int max = INT_MIN;
    for (int i = 0; i < 101; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << max << endl;
    return 0;
}