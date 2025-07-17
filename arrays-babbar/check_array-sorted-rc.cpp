#include <bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> arr, int i, int size)
{
    if (i == size - 1)
    {
        return true;
    }

    if (arr[i + 1] < arr[i] && i < size)
    {
        return false;
    }

    return checkSorted(arr, i + 1, size);
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int i = 0;
    int size = arr.size();
    bool flag = checkSorted(arr, i, size);

    cout << "The function returns: " << flag;
    return 0;
}
