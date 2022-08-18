#include <iostream>

using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string str;
        cin >> str;
        int rem = 0;
        int l = 0;
        int q = 0;
        while (q == 0)

        {
            l = rem;
            for (int i = 0; i < str.size(); i++)
            {
                int flag = 0;
                for (int j = 0; j < str.size(); j++)
                {
                    if (str[i] == str[j] && i != j)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    str.erase(i, 1);
                    rem++;
                }
            }
            if (l == rem)
            {
                q = 1;
            }
        }
        int k = 0;
        int z = 0;

        while (k == 0)
        {
            z = rem;
            for (int i = 0; i < str.size(); i = i + 2)
            {
                if (str[i] != str[i + 1])
                {
                    str.erase(i, 1);
                    rem++;
                }
            }
            if (z == rem)
            {
                k = 1;
            }
        }

        // for (int i = 0; i < str.size(); i++)
        // {
        //     int flag = 0;
        //     for (int j = 0; j < str.size(); j++)
        //     {
        //         if (str[i] == str[j] && i != j)
        //         {
        //             flag = 1;
        //             break;
        //         }
        //     }
        //     if (flag == 0)
        //     {
        //         str.erase(i, 1);
        //         rem++;
        //     }
        // }

        cout << rem << endl;
    }
}