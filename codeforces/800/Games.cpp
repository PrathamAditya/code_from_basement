#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        vector<int> vv;
        cin >> a;
        vv.push_back(a);
        cin >> b;
        vv.push_back(b);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x = v[i].at(0);
        for (int j = 0; j < 2; j++)
        {
            if ()
        }
    }
    return 0;
}