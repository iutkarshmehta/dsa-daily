#include <bits/stdc++.h>
using namespace std;

/// @brief Sort 0s and 1s
/// @param arr array to be sorted
/// @return returs the sorted array
vector<int> sort0s1s(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        else if (arr[start] == 1)
        {
            swap(arr[start], arr[end]);
            end--;
        }
        else
        {
            swap(arr[end], arr[start]);
            start++;
            end--;
        }
    }
    return arr;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    arr = sort0s1s(arr);

    for (auto i : arr)
    {
        cout << i << " ";
    }
}