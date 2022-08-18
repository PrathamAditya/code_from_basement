#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool isColorFul = false;

    char A[m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[j];
            if (A[j] == 'C' || A[j] == 'M' || A[j] == 'Y')
            {
                isColorFul = true;
            }
        }
    }
    if (isColorFul)
    {
        cout << "#Color";
    }
    else
    {
        cout << "#Black&White";
    }
    return 0;
}