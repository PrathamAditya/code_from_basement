#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int A[4] = {0};

    for (int i = 0; i < str.size(); i = i + 2)
    {
        string s;
        s = str[i];
        A[stoi(s)]++;
    }
    int count = 0;
    for (int i = 1; i <= 3; i++)
    {
        while (A[i] > 0)
        {
            cout << i;
            A[i]--;

            if (count < (str.size() / 2))
            {
                cout << "+";
            }
            count++;
        }
    }

    return 0;
}