#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float f;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        f = f + x;
    }
    cout << f / n << endl;
    return 0;
}
// #include <iostream>
// #include <iomanip>

// int main()
// {
//     double d = 122.345;
//     std::cout << std::fixed << std::setprecision(2) << d;
// }