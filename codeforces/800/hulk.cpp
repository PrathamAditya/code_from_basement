#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "I hate it";
    }
    else if (n == 2)
    {
        cout << "I hate that I love it";
    }
    else
    {
        string s1 = "that I love ";
        string s2 = "that I hate ";
        string sss = "I hate ";

        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sss = sss + s2;
            }
            else
            {
                sss = sss + s1;
            }
        }

        sss = sss + "it";
        cout << sss << endl;
    }

    return 0;
}