#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int last = 0;
    int current = 0;
    int i = 0;
    while (n > 0)
    {
        i++;
        current = last + i;
        last = current;
        n = n - current;
        if (n < 0)
        {
            i--;
        }
    }
    cout << i;

    return 0;
}