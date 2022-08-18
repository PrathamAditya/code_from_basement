#include <iostream>
using namespace std;
void fun(int w)
{
    if (w % 2 != 0 || w == 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int n = 100;
    for (int i = 1; i <= n; i++)
    {
        cout << i << "->";
        fun(i);
    }
    return 0;
}