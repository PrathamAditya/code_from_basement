#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            m++;
        }
        if (x < y)
        {
            c++;
        }
    }
    if (m == c)
    {
        cout << "Friendship is magic!^^";
    }
    else if (c < m)
    {
        cout << "Mishka";
    }
    else
    {
        cout << "Chris";
    }
    return 0;
}