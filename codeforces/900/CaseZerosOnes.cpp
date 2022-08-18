#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    // int i = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0' && s[i + 1] == '1' || s[i] == '1' && s[i + 1] == '0')
        {
            s = s.substr(0, i) + s.substr(i + 1, s.size());
        }
        // i++;
    }
    cout << s.size() - 2 << endl;
    return 0;
}