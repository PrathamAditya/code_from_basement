#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;

    cout << n + floor((n - 1) / (m - 1)) << endl;
    return 0;
}