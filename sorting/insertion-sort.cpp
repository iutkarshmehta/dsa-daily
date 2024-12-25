#include <bits/stdc++.h>
using namespace std;

/// @brief select each element and check backwards if the a[i] > a[i-1] swap both and move backwards and compare, complextiy o(n2)
/// @param arr
void insertionSort(vector<int> &arr)
{
    // code here
    for (int i = 0; i <= arr.size() - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
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
    insertionSort(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
}