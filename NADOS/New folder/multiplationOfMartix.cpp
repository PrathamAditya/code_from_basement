#include <iostream>
using namespace std;

const int mr = 100, mc = 100;
void inputBound(int (&mat)[mr][mc], int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
}

int main(int argc, char **argv)
{

    int mat[mr][mc] = {0};
    int n, m;
    cin >> n >> m;

    inputBound(mat, n, m);

    // write your code here
    int minR = 0;
    int minC = 0;
    int maxR = n - 1;
    int maxC = m - 1;
    int totalE = n * m;
    int count = 0;

    while (count < totalE)
    {
        // left wall
        for (int i = minR, j = minC; i < maxR && count < totalE; i++)
        {
            cout << mat[i][j] << endl;
            count++;
        }
        minC++;

        // bottom wall
        for (int i = maxR, j = minC; j <= maxC && count < totalE; j++)
        {
            cout << mat[i][j] << endl;
            count++;
        }
        maxR--;

        // left wall

        for (int i = maxR, j = maxC; i >= minR && count < totalE; i--)
        {
            cout << mat[i][j] << endl;
            count++;
        }
        maxC--;

        // top wall

        for (int i = minR, j = maxC; j >= minC && count < totalE; j--)
        {
            cout << mat[i][j] << endl;
            count++;
        }
        minR++;
    }
}
