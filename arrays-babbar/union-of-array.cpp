#include <bits/stdc++.h>
using namespace std;

vector<int> unionOfArrays(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> ans;
    for (int i = 0; i < arr1.size(); i++)
    {
        ans.push_back(arr1[i]);
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        ans.push_back(arr2[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {5, 6, 7};
    vector<int> ans = unionOfArrays(arr1, arr2);

    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}
