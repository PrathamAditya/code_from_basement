#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int h = 0;
    int l = 0;
    int count = 0;
    int first = 0;
    cin >> first;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > first)
        {
            h = x;
            count++;
        }
        else
        {
            l = x;
            count++;
        }
        if (x > h)
        {
            h = x;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}