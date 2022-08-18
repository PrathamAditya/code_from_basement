#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a1[n];
    int a2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i] >> a2[i];
    }
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        int x = a1[i];
        int y = a2[i];

        for (int j = 0; j < n; j++)
        {
            if (i != j && x < a1[j] && y == a2[j] && a == 0)
            {
                a++;
            }
            if (i != j && x > a1[j] && y == a2[j] && b == 0)
            {
                b++;
            }
            if (i != j && x == a1[j] && y > a2[j] && c == 0)
            {
                c++;
            }
            if (i != j && x == a1[j] && y < a2[j] && d == 0)
            {
                d++;
            }
        }
        if (a + b + c + d == 4)
        {
            count++;
        }
        // cout << a << " " << b << " " << c << " " << d << endl;
    }
    cout << count << "\n";

    return 0;
}