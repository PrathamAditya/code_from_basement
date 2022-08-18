#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int count = 1;
    while ((((n * count) % 10) != k) && ((n * count) % 10 != 0))
        count++;
    cout << count;
    return 0;
}