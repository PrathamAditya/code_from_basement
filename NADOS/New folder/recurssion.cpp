#include <bits/stdc++.h>
using namespace std;
void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}
int findpivot(vector<int> &arr)
{
    // write your code here
    int lo = 0;
    int high = arr.size() - 1;

    while (lo < high)
    {
        int mid = (lo + high) / 2;

        if (arr.at(mid) > arr.at(high))
        {
            lo = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return arr.at(lo);
}
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n, 0);
    input(vec);
    int pivot = findpivot(vec);
    cout << pivot;
    return 0;
}