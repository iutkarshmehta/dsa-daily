#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int right = mid + 1;
    int left = low;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
   
    for (int i = 0;i <temp.size();i++) {
        arr[low + i] = temp[i];
    }
    
}
void mergeSort(vector<int> &arr, int low, int high)
{
    
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
int main()
{
    vector<int> arr = {1, 7, 5, 3, 4, 9, 8, 2};
    mergeSort(arr, 0, arr.size() - 1);
    cout << "Sorted array elements are: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}