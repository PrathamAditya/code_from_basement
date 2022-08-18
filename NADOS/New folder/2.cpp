#include <iostream>
#include <vector>
#include <string>
using namespace std;
void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}
int BS(int key, vector<int> &arr)
{
    int l = 0;
    int h = arr.size() - 1;

    while (l < h)
    {
        int mid = (l + h) / 2;
        if (arr.at(mid) == key)
        {
            return mid;
        }
        else if (arr.at(mid) > key)
        {
            h = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n, 0);
    input(vec);
    int key;
    cout << "Enter the key: ";
    cin >> key;

    int pivot = BS(key, vec);
    cout << pivot;
    return 0;
}