#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> arr)
{
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    cout << "Array elements are: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    reverseArray(arr);
    return 0;
}
