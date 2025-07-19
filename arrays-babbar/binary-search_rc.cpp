#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int start, int end, int key)
{
    if (start > end)
        return -1;
    int mid = (start + end) / 2;
    if (arr[mid] == key)
        return mid;

    return key > arr[mid] ? binarySearch(arr, mid + 1, end, key) : binarySearch(arr, start, mid - 1, key);
}

int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60, 70};

    int index = binarySearch(arr, 0, arr.size() - 1, 30);
    cout << "Element found at index: " << index;

    return 0;
}
