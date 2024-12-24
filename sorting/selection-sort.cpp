#include <bits/stdc++.h>
using namespace std;

/// @brief select the minimum and move to the left, complextiy o(n2)
/// @param arr 
void selectionSort(vector<int> &arr)
{
    // code here
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    } 
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selectionSort(arr);
    for(auto i: arr ){
        cout<< i << " ";
    }
}