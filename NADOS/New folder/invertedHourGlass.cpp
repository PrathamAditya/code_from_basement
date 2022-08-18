#include <iostream>
using namespace std;

int main()
{

    // write your code here
    int n;
    cin >> n;
    int sp = 0;
    int st = n;
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < sp; space++)
        {
            cout << "\t";
        }
        // for (int space = 0; space < sp; space++)
        // {
        //     cout << "\t";
        // }
        for (int star = 0; star < st; star++)
        {
            if (i > n / 2 || i == n - 1 || i == 0)
            {
                cout << "*\t";
            }
            // if (i <= n / 2)
            else
            {
                if (star == 0 || star == st - 1)
                {
                    cout << "*\t";
                }
                else
                {
                    cout << "\t";
                }
            }
        }

        for (int space = 0; space < sp; space++)
        {
            cout << "\t";
        }
        // for (int space = 0; space < sp; space++)
        // {
        //     cout << "\t";
        // }

        if (i < n / 2)
        {
            sp = sp + 1;
            st = st - 2;
        }
        else
        {
            sp = sp - 1;
            st = st + 2;
        }

        cout << endl;
    }
}