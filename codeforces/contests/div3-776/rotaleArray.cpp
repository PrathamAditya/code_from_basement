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
void leftR(int A[], int t, int n)
{
    while (t--)
    {
        int t = A[0];

        for (int i = 1; i < n; i++)

        {
            A[i - 1] = A[i];
        }
        A[n - 1] = t;
    }
}
void rightR(int A[], int t, int n)
{
    while (t--)
    {
        int t = A[n - 1];

        for (int i = n - 1; i >= 1; i--)
        {
            A[i] = A[i - 1];
        }

        A[0] = t;
    }
}
void leftR2(int A[], int t, int n)
{
    int i = 0;
    int j = t - 1;
    while (i <= j)
    {
        swap(A[i], A[j]);
        i++;
        j--;
    }
    int ii = t;
    int jj = n - 1;
    while (ii <= jj)
    {
        swap(A[ii], A[jj]);
        ii++;
        jj--;
    }
    i = 0;
    j = n - 1;
    while (i <= j)
    {
        swap(A[i], A[j]);
        i++;
        j--;
    }
}

void rightR2(int A[], int t, int n)
{
    int i = t;
    int j = n - 1;
    while (i <= j)
    {
        swap(A[i], A[j]);
        i++;
        j--;
    }
    int ii = 0;
    int jj = t - 1;
    while (ii <= jj)
    {
        swap(A[ii], A[jj]);
        ii++;
        jj--;
    }
    i = 0;
    j = n - 1;
    while (i <= j)
    {
        swap(A[i], A[j]);
        i++;
        j--;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    rightR2(A, 3, n);
    // rightR(A, 4, n);
    // printing
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    leftR2(A, 3, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}