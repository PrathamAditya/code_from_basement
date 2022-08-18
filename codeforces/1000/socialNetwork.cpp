#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;

    list<int> mylist{};
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        mylist.push_back(c);
    }
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x = mylist[i];
        if (std::count(a.begin(), a.end(), x))
        {
        }
        else
        {

            a.push_front(x);
        }
    }

    return 0;
}