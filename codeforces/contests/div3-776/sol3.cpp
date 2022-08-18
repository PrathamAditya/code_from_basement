/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long int
using namespace std;

#ifdef LOCAL
#else
#endif
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n >> m;

        vector<pair<pair<int, int>, int>> v;

        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            // sort on the basis of the  of the index

            v.push_back({{y, x}, i + 1});
        }
        sort(v.begin(), v.end());

        vector<pair<int, int>> ind;
        int sum = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            sum = sum + v[i].first.first;
            ind.push_back({v[i].first.second, v[i].second});
        }
        cout << sum << endl;
        sort(ind.begin(), ind.end());

        for (int i = 0; i < n; i++)
        {
            cout << ind[i].second << " " << ind[2 * n - 1 - i].second << endl;
        }
    }
    return 0;
}