#include <bits/stdc++.h>
using namespace std;
void binarySearch(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            cout << "Element found at: " << mid;
            break;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}

int main()
{
    vector<int> arr{2, 3, 4, 5};
    int target = 2;
    binarySearch(arr, target);
    return 0;
}
