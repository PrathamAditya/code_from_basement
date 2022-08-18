#include <bits/stdc++.h>
using namespace std;
void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}
void targetSumPair(vector<int> &arr, int target)
{
    // write your code here
    sort(arr.begin(), arr.end());
    int s = 0;
    int e = arr.size() - 1;
    while (s < e)
    {
        if (arr[s] + arr[e] == target)
        {
            cout << arr[s] << ", " << arr[e] << endl;
            s++;
            e--;
        }
        else if (arr[s] + arr[e] < target)
        {
            s++;
        }
        else
        {
            e--;
        }
    }
}
int main()
{
    int n, target;
    cin >> n;
    vector<int> vec(n, 0);
    input(vec);
    cin >> target;
    targetSumPair(vec, target);
    return 0;
}