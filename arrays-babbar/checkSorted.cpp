#include <bits/stdc++.h>
using namespace std;

void checkSorted(vector<int> &arr, int i, int n)
{
    if (i >= n - 1)
    {
        cout << "Array is sorted";
        return;
    }

    if (arr[i] > arr[i + 1])
    {
        cout << "Array is not sorted";
        return;
    }
    else
    {
        checkSorted(arr, i + 1, n);
    }
}

int main()
{
    vector<int> arr{4, 5};
    int n = 2;
    checkSorted(arr, 0, n);
    return 0;
}
