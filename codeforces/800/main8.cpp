#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int id = 0;
        while (id + 1 < n && s[id] == s[id + 1])
        {
            id++;
        }
        if (id + 1 == n)
        {
            cout << "-1 -1" << endl;
        }
        else
        {
            cout << id + 1 << " " << id + 2 << endl;
        }
    }
}