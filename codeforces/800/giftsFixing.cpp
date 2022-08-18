#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        int B[n];
        int count = 0;
        int cL = 0;
        int oL = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            if (A[i] > cL)
            {
                cL = A[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
            if (B[i] > oL)
            {
                oL = B[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            while (A[i] > cL && B[i] > oL)
            {
                A[i]--;
                B[i]--;
                count++;
            }
            while (A[i] > cL)
            {
                A[i]--;
                count++;
            }
            while (B[i] > oL)
            {
                B[i]--;
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}