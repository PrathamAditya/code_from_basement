#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    int a[n];
    int i;
    for (i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    int l, r;
    int diff = 2000;
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) < diff)
        {
            diff = abs(a[i] - a[i + 1]);
            l = i;
            r = i + 1;
        }
    }
    if (diff > abs(a[0] - a[n - 1]))
    {
        l = 0;
        r = n - 1;
    }
    std::cout << l + 1 << " " << r + 1 << std::endl;
}
