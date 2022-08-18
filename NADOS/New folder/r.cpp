#include <iostream>
#include <vector>
using namespace std;

vector<string> gss(string s)
{
    // write your code here
}

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
        cout << "======" << endl;
    }
    int cnt = 0;
    cout << "[";
    for (string str : v)
    {
        if (cnt != v.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << "]";
}