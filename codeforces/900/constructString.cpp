#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s = "abcdefijklmnopqrstuvxyz";
    // while (t--)
    // {
    //     int n, a, b;
    //     cin >> n >> a >> b;
    //     for (int i = 0; i < n; ++i)
    //     {
    //         cout << char('a' + i % b);
    //     }
    //     cout << endl;
    // }
    while (t--)
    {
        int n, a, b;
        cin >> n, a, b;
        int j = n / b;
        string ss = s.substr(0, b);
        for (int i = 0; i < j; ++i)
        {
            cout << ss;
        }
        cout << s.substr(0, (n - b * j));
    }
    return 0;
}