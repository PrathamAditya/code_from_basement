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
//     int t;
//     cin >> t;
//     int a = -1;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int A[n];

//         for (int i = 0; i < n; i++)
//         {
//             cin >> A[i];
//         }
//         sort(A, A + n);
//         for (int i = 0; i < n; i++)
//         {
//             if (A[i] == A[i + 1] == A[i + 2])
//             {

//                 a = A[i];
//             }
//         }
//         cout << a << "\n";
//     }
// }
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int ans = -1;
        int c = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            // int s=a[i];
            // for (int j = 0; j < n; j++) {
            //     if(a[j]==a[i]){
            //         c++;
            //     }

            // }
            if (a[i + 1] == a[i] == a[i + 2])
                ans = a[i];
        }
        cout << ans << endl;
    }
}
