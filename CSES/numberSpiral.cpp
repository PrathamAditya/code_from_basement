#include <bits/stdc++.h>
using namespace std;
#define ull ;

int main()
{
    int long long t;
    cin >> t;
    while (t--)
    {
        unsigned long long a;
        unsigned long long b;
        cin >> a >> b;
        if (a == 1 && b == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            unsigned long long big = 0;
            unsigned long long sml = 0;
            if (b > a)
            {
                big = b;
                sml = a;
            }
            else
            {
                big = a;
                sml = b;
            }
            cout << (big * big) - (sml - 1) << endl;
        }
    }

    return 0;
}