#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n1, m1, n2, m2;
    cin >> n1 >> m1;

    int a1[n1][m1];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> a1[i][j];
        }
    }

    cin >> n2 >> m2;
    int a2[n2][m2];
    if (m1 == n2)
    {
        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                cin >> a1[i][j];
            }
        }
        int mulA[n1][m2];
        }
    else
    {
        cout << "The invalid inputs!!" << endl;
    }
}