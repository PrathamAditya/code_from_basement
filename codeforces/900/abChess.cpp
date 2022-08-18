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
    int tt = 8;
    int b = 0;
    int w = 0;
    while (tt--)
    {
        for (int i = 0; i < 8; i++)
        {
            char c;
            cin >> c;
            if (c == 'q')
            {
                b = b + 9;
            }
            else if (c == 'r')
            {
                b = b + 5;
            }
            else if (c == 'b' || c == 'n')
            {
                b = b + 3;
            }
            else if (c == 'p')
            {
                b++;
            }
            else if (c == 'Q')
            {
                w = w + 9;
            }
            else if (c == 'R')
            {
                w = w + 5;
            }
            else if (c == 'B' || c == 'N')
            {
                w = w + 3;
            }
            else if (c == 'P')
            {
                w++;
            }
        }
    }
    if (b > w)
    {
        cout << "Black";
    }
    else if (w > b)
    {
        cout << "White";
    }
    else
    {
        cout << "Draw";
    }

    return 0;
}