#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = std::max(a, b);
    int xx = std::max(c, d);
    int xxx = std::max(xx, x);
    if (xxx - a > 0)
    {
        cout << xxx - a << " ";
    }
    if (xxx - b > 0)
    {
        cout << xxx - b << " ";
    }
    if (xxx - c > 0)
    {
        cout << xxx - c << " ";
    }
    if (xxx - d > 0)
    {
        cout << xxx - d;
    }
    return 0;
}