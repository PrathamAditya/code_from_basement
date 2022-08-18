#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeTwoSortedArrays(vector<int> &A, vector<int> &B)
{
    vector<int> result;
    int x = 0;
    int i = 0;
    int j = 0;
    while (x < A.size() + B.size())
    {
        if (A[i] < B[j])
        {
            result.push_back(A[i]);
        }
        else if (A[i] > B[j])
        {
            result.push_back(B[j]);
        }
        else
        {
            result.push_back(B[j]);
            result.push_back(A[i]);
            i++;
            j++;
        }

        if (i >= A.size() || j >= B.size())
        {
            break;
        }
        x++;
    }
    return result;
}

void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

void output(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> A(n, 0);
    input(A);

    cin >> m;
    vector<int> B(m, 0);
    input(B);

    vector<int> ans = mergeTwoSortedArrays(A, B);
    output(ans);
    return 0;
}