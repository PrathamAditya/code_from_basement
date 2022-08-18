
// A optimized school method based C++ program to check
// if a number is composite.
#include <bits/stdc++.h>
using namespace std;

bool isComposite(int n)
{
    // Corner cases
    if (n <= 3)
        return false;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return true;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return true;

    return false;
}

// Driver Program to test above function
int main()
{
    int n;
    cin >> n;

    int a = n / 2;
    int b = n - a;
    bool ist = true;

    while (ist)
    {
        if (isComposite(a) && isComposite(b))
        {
            cout << a << " " << b << endl;
            ist = false;
        }
        else
        {
            a--;
            b++;
        }
    }
}