#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int st = 1;
    int sp = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int star = 0; star < st; star++)
        {
            cout << "*\t";
        }
        for (int space = 1; space < sp; space++)
        {
            if (i > 0)
            {
                if (space == n / 2 - i || space == n / 2 + i)
                {
                    cout << "*\t";
                }
                else if (space == n / 2 && i == n / 2)
                {
                    cout << "*\t";
                }
                else
                {
                    cout << "\t";
                }
            }
            else
            {
                cout << "\t";
            }
        }
        for (int star = 0; star < st; star++)
        {
            cout << "*\t";
        }
        cout << endl;
    }

    return 0;
}