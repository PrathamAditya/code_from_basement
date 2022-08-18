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
void swap(char *a, char *b)
{
    char *temp = a;
    a = b;
    b = temp;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        string a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < a.size(); i++)
        {
            if (c[i] == b[i])
            {
                swap(c[i], a[i]);
            }
            else
            {
                swap(c[i], b[i]);
            }
        }
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
    // char a = '1';
    // char b = '2';

    // swap(a, b);
    // cout << a << " " << b << endl;
}