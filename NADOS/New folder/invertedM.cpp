#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;

    // write your code here
    // for the first to middle-1
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1)
            {
                cout << "*\t";
            }
            else
            {
                cout << "\t";
            }
        }
        cout << endl;
    }

    // for the middle de
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1 || i == n / 2)
        {
            cout << "*\t";
        }
        else
        {
            cout << "\t";
        }
    }
    cout << endl;
    // between middle and last

    // for last row
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            cout << "*\t";
        }
        else
        {
            cout << "\t";
        }
    }
}