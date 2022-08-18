#include <iostream>
using namespace std;

const int mr = 100, mc = 100;

int **input(int **mat, int n, int m)
{
    mat = new int *[n];
    for (int i = 0; i < n; i++)
    {
        int *arr = new int[m];
        for (int j = 0; j < m; j++)
        {
            cin >> arr[j];
        }
        mat[i] = arr;
    }
    return mat;
}

int main(int argc, char **argv)
{
    int n, m;
    cin >> n >> m;
    int **mat = input(mat, n, m);

    // write your code here
    int i = 0;
    int j = 0;
    int elt = n * m;
    int dir = 0;
    int count = 0;

    while (count < elt)
    {
        dir = (dir + mat[i][j]) % 4;
        count++;

        if (dir == 0)
        {
            j++;
            if (j == m)
            {
                j--;
                break;
            }
        }
        else if (dir == 1)
        {
            i++;
            if (i == n)
            {
                i--;
                break;
            }
        }
        else if (dir == 2)
        {
            j--;
            if (j == -1)
            {
                j++;
                break;
            }
        }
        else if (dir == 3)
        {
            i--;
            if (i == -1)
            {
                i++;
                break;
            }
        }
    }
    cout << i << endl;
    cout << j << endl;

    return 0;
}