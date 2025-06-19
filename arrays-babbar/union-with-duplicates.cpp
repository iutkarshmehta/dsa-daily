#include <bits/stdc++.h>
using namespace std;

void unionWithDuplicates(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> ans;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr2[j] = INT_MIN;
            }
        }
    }

    for (int i = 0; i < arr1.size(); i++)
    {
        ans.push_back(arr1[i]);
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        if (arr2[i] != INT_MIN)
        {
            ans.push_back(arr2[i]);
        }
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
}

int main()
{

    int size;
    cin >> size;
    vector<int> arr1(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    vector<int> arr2(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }
    unionWithDuplicates(arr1, arr2);

    return 0;
}