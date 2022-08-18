#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char c;
                cin >> c;
                if (i < n - 1)
                {
                    if (j == m - 1 && c == 'R')
                    {
                        count++;
                    }
                }
                else
                {
                    if (j < m - 1 && c == 'D')
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}