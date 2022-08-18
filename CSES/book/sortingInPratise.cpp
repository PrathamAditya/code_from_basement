/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#else
#endif
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // string s = "Pratham";
    // sort(s.begin(), s.end());
    // cout << s << endl;

    // cout << "===========" << endl;

    // vector<int> v = {4, 2, 5, 3, 5, 8, 3};
    // cout << "Dislplaying in the inc order" << endl;
    // sort(v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    // sort(v.rbegin(), v.rend());
    // cout << "Dislplaying in the dec order" << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }

    int A[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    sort(A, A + 10);

    cout << "After sorting the elemets in  dec order:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}