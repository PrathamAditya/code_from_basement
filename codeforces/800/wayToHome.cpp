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
    int n, jump;
    cin >> n >> jump;
    string st;
    cin >> st;
    int x = 0, count = 0;
    // for(int i=0;i<st.length();i++){
    //     x+=jump;
    //     if(st[x]=='0'){
    //         while(st[x]!='1'){
    //             jump--;
    //             x-=jump;
    //         }
    //     }
    // }
    int flag = 1;
    while (x != st.length() - 1)
    {
        int xx = jump;
        x += xx;
        while (st[x] != '1')
        {
            if (xx < 1)
            {
                flag = -1;
                break;
            }
            xx--;
            x--;
        }
        count++;
    }
    if (flag == -1)
    {
        cout << -1;
    }
    else
    {
        cout << count;
    }

    return 0;
}