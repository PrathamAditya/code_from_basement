#include <iostream>
using namespace std;

void *inverse(int *arr, int n)
{
    // write your code here
    for (int i = 0; i < n; i++)
    {
        // cout << arr[arr[i]] = i;
        cout << arr[arr[i]];
    }
    return arr;
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    inverse(arr, n);
    // display(inv, n);
}