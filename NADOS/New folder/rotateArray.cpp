#include <iostream>
using namespace std;

void rotate(int *arr, int n, int k)
{
    // write your code here
    int x = n - 1;
    while (x >= (n - k))
    {
        int temp = arr[n - 1];
        int move = n - 1;
        int i = n - 1;
        int j = n - 2;
        while (move)
        {
            arr[i] = arr[j];
            i--;
            j--;
            move--;
        }
        arr[0] = temp;
    }
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, r;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> r;

    rotate(arr, n, r);
    display(arr, n);
}