#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int A[100001] = {0};
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            A[x]++;
        }
        int c = 0;
        for (int i = 1; i < 100001; i++)
        {
            if (A[i] > 0)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}