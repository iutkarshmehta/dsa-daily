#include <bits/stdc++.h>
using namespace std;

void linearSearch(vector<int> arr, int target)
{
    bool elementFound = false;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            elementFound = true;
            break;
        }
    }
    if (elementFound)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element Not found";
    }
}

int main()
{
    vector<int> arr = {2, 4, 6, 5, 2};
    linearSearch(arr, 10);
    return 0;
}
