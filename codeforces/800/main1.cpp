#include <iostream>
#include <cstdlib>

int largestAmongThree(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
int smallestAmongThree(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b < c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int main()
{
    int p, a, b, c;
    std::cin >> p >> a >> b >> c;

    // if (p == a || p == b || p == c)
    // {
    //     std::cout << 0;
    // }
    // else if (p < a && p < b && p < c)
    // {
    //     int temp = largestAmongThree(a, b, c);
    //     std::cout << p - temp << std::endl;
    // }
    // else
    // {
    //     if (p - a < p - b)
    //     {
    //         if (p - a < p - c)
    //         {
    //             std::cout << p - a << std::endl;
    //         }
    //         else
    //         {
    //             std::cout << p - c << std::endl;
    //         }
    //     }
    //     else
    //     {
    //         if (p - b < p - c)
    //         {
    //             std::cout << p - b << std::endl;
    //         }
    //         else
    //         {
    //             std::cout << p - c << std::endl;
    //         }
    //     }
    // }
    int x1 = abs(p - a);
    int x2 = abs(p - b);
    int x3 = abs(p - c);
    if (x1 < x2)
    {
        if (x1 < x3)
        {
            std::cout << x1 << std::endl;
        }
        else
        {
            std::cout << x3 << std::endl;
        }
    }
    else
    {
        if (x2 < x3)
        {
            std::cout << x2 << std::endl;
        }
        else
        {
            std::cout << x3 << std::endl;
        }
    }
}
