/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long int
using namespace std;

#ifdef LOCAL
#else
#endif
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    string str = s;
    int cnt = 0;
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        swap(s[i], s[j]);

        j--;
        i++;
    }

    if (s[n - 1] == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        int i = n - 1;
        while (i >= 0)
        {
            if (s[i] == '1')
            {
                cnt++;
                i--;
            }
            else
            {
                cnt++;
                break;
            }
        }
        cout << cnt;
    }

    return 0;
}