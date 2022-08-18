#include <iostream>
using namespace std;

int main()
{
    int l;
    cin >> l;
    bool isT = false;
    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int k = 0;
        cin >> k;
        if (k == l)
        {
            isT = true;
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int k = 0;
        cin >> k;
        if (k == l)
        {
            isT = true;
        }
    }
    if (isT == true)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

    return 0;
}