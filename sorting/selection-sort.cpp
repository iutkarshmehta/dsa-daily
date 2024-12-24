#include <bits/stdc++.h>
using namespace std;

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
    vector<int> arr;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selectionSort(arr);
}