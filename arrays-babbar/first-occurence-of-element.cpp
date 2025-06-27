#include <bits/stdc++.h>
using namespace std;
int firstOccureneceOfElement(vector<int> arr, int target)
{
    int ans = -1;
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            e = mid - 1;
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
    return ans;
}

int main()
{
    vector<int> arr{1,1,2, 2, 2, 2, 2, 3, 4, 5};
    int target = 2;
    int index = firstOccureneceOfElement(arr, target);
    cout << "First occurence is at: " << index;
    return 0;
}
