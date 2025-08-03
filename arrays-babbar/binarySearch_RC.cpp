#include <bits/stdc++.h>
using namespace std;

void binarySearch(vector<int> &arr, int start, int end, int target)
{
    int mid = (start + end) / 2;
    if (arr[mid] == target)
    {
        cout << "Element found at " << mid << endl;
        return;
    }

    if(arr[mid] > target) {
        binarySearch(arr, start, mid - 1, target);
    }
    else{
        binarySearch(arr, mid + 1, end, target);
    }
   
}

int main()
{
    vector<int> arr{2, 3, 5, 6, 7, 8};
    binarySearch(arr, 0, 5, 7);
    return 0;
}
