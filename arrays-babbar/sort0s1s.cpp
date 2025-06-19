#include <bits/stdc++.h>
using namespace std;
void sort0s1s(vector<int> &arr)
{
    int i = 0;
    int start = 0;
    int end = arr.size() - 1;
    while (start < end)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            start++;
            i++;
        }
        else
        {
            swap(arr[i], arr[end]);
            end--;
            i++;
        }
    }
}

int main()
{

    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort0s1s(arr);
    cout << "Sorted array is: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}
