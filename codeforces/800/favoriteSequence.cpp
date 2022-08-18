#include <iostream>
#include <vector>
using namespace std;
void Solution()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n - n / 2; ++i)
    {
        cin >> ans[2 * i];
    }
    for (int i = 0; i < n / 2; ++i)
    {
        if (n % 2 == 0)
        {
            cin >> ans[n - 1 - 2 * i];
        }
        else
        {
            cin >> ans[n - 2 - 2 * i];
        }
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Solution();
    }
    return 0;
}