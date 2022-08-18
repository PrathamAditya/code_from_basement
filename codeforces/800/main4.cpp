#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        int diff = abs(a - b);
        if (diff * 2 > b)
        {
            if (c - diff > 0)
            {
                std::cout << c - diff << std::endl;
            }
            else
            {
                std::cout << c + diff << std::endl;
            }
        }
    }
}