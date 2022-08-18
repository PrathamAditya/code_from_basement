#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // write your code here
    for (int i = 0; i < n; i++)
    {
        cout << "-\t";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (k >= i && k <= j)
                {
                    cout << arr[k] << "\t";
                }
                else
                {
                    cout << "-\t";
                }
            }
            cout << endl;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << arr[0] << "\t";
        }
        else if (i == n - 1)
        {
            cout << arr[n - 1] << "\t";
        }
        else
        {
            cout << "-\t";
        }
    }
}