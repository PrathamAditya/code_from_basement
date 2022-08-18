#include <iostream>
#include <string.h>
using namespace std;

void printallpralindrome(string str)
{
    // write your code here
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i; j < str.length(); j++)
        {
            for (int k = j; k < str.length(); k++)
        }
    }
}

int main()
{
    string str;
    getline(cin, str);
    printallpralindrome(str);
    return 0;
}