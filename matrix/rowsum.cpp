#include <bits/stdc++.h>
using namespace std;
void rowSum(int arr[][3], int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            rowSum = rowSum + arr[i][j];
        }
        cout << rowSum << endl;
    }
}

int main()
{
    int arr[3][3] = {
        {3, 3, 3}, {4, 6, 9}, {4, 6, 5}};
    rowSum(arr, 3, 3);

    return 0;
}
