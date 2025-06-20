#include <bits/stdc++.h>
using namespace std;
void transpose(int arr[][3], int rows, int cols) {
    for(int i = 0; i< rows; i++) {
        for(int j = 0 ; j<i;j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i = 0; i< rows; i++) {
        for(int j = 0 ; j<cols;j++) {
            cout<< arr[i][j]<< " ";
        }
        cout<< endl;
    }
}

int main()
{
    int arr[3][3] = {
        {3, 3, 3}, {4, 6, 9}, {4, 6, 5}};
    transpose(arr, 3, 3);

    return 0;
}