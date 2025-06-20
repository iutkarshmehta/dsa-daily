#include <bits/stdc++.h>
using namespace std;
void minMax(int arr[][3], int rows, int cols)
{
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    cout << max << endl;
    cout << min << endl;
}

int main()
{
    int arr[3][3] = {
        {3, 3, 3}, {4, 6, 9}, {4, 6, 5}};
    minMax(arr, 3, 3);

    return 0;
}
