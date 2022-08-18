#include <iostream>
#include <vector>
using namespace std;

void partition(int arr[], int n, int pivot)
{
    // write your code
    vector<int> left;
    vector<int> right;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= pivot)
        {
            left.push_back(arr[i]);
        }
        else
        {
            right.push_back(arr[i]);
        }
    }
    for (int a : left)
    {
        cout << a << endl;
    }
    for (int a : right)
    {
        cout << a << endl;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pivot;
    cin >> pivot;

    partition(arr, n, pivot);
    // print(arr, n);
    return 0;
}