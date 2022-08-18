#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = 0;
    int A[123] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        string s;
        A[str[i]]++;
    }
    for (int i = 97; i <= 122; i++)
    {
        if (A[i] > 0)
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}