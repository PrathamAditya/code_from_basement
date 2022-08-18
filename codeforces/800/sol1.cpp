/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long int
using namespace std;
void swap(char *a, char *b)
{
    char *temp = a;
    a = b;
    b = temp;
}

#ifdef LOCAL
#else
#endif
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;

    int i = 0;
    int j = s.size();

    while (i <= j)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else
            {
                j--;
            }
        }
        else
        {
            i++;
        }
    }
    cout << s;
    return 0;
}