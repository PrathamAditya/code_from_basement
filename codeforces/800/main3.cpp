#include <bits/stdc++.h>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, k;
        int sum = 0;
        std::cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            std::cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            std::cin >> b[i];
        }
        std::sort(a, a + n);
        std::sort(b, b + n);

        for (int i = 0; i < k; i++)
        {
            if (a[i] < b[n - 1 - i])
                a[i] = b[n - 1 - i];
        }
        for (int i = 0; i < n; i++)
        {

            sum = sum + a[i];
        }
        std::cout << sum << std::endl;
    }
}