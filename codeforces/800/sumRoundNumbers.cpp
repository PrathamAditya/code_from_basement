#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ten = 1;
        int count = 0;
        vector<int> v;

        while (n > 0)
        {
            int x;
            x = n % 10;
            n = n / 10;
            if (x != 0)
            {
                v.push_back(x * ten);
                count++;
            }

            ten = ten * 10;
        }
        cout << count << endl;
        for (int i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}