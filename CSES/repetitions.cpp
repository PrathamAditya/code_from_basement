#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int i = 0;
    int j = 0;
    int k = 0;
    int count = 0;
    int ma = 0;
    while (k < str.size())
    {
        if (str[k] == str[k + 1])
        {
            k++;
            j++;
            count = (j - i) + 1;
            ma = max(ma, count);
        }
        else
        {
            i = k + 1;
            j = k + 1;
            k = k + 1;
        }
    }
    if (ma == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << ma << endl;
    }
    return 0;
}