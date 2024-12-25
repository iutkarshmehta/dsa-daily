#include <bits/stdc++.h>
using namespace std;

/// @brief select the max and move to the extreme right, complextiy o(n2)
/// @param arr
void bubbleSort(vector<int> &arr)
{
    // code here
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        bool didSwap = false;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = true;
            }
        }
        if(didSwap) {
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bubbleSort(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
}