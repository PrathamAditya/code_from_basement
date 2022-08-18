// /**
//  * author: adityapratham
//  **/
// #include <bits/stdc++.h>

// #define ll long long
// #define ull unsigned long long int
// using namespace std;

// #ifdef LOCAL
// #else
// #endif
// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int tt;
//     cin >> tt;

//     while (tt--)
//     {
//         int n;
//         cin >> n;

//         long double k;
//         cin >> k;

//         long double A[n];

//         long double sum = 0;

//         for (int i = 0; i < n; i++)
//         {
//             cin >> A[i];
//             sum = sum + A[i];
//         }

//         if (sum / (n - 1) > k)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             cout << "YES" << endl;
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n;
        cin >> k;

        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            int h;
            cin >> h;
            ans.push_back(h);
        }

        bool flag = 0;

        for (int j = 0; j < ans.size(); j++)
        {

            auto it = ans.begin();
            int sum = 0;

            for (int i = 1; i < ans.size(); i++)
            {
                sum += ans[i] - (*it);
            }

            if (sum == k)
            {
                cout << "Yes ";
                flag = 1;
                break;
            }

            else
            {
                ans.erase(it);
            }
        }

        if (flag == 0)
            cout << "No ";
    }

    return 0;
}