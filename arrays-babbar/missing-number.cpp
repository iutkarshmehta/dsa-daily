#include <bits/stdc++.h>
using namespace std;

/// @brief issue in logic
/// @param nums 
/// @return 
int missingNumber(vector<int> &nums)
{
    int i = 0;
    int ans = 0;
    while (i < nums.size())
    {
        int index = nums[i];
        if ( index < nums.size() && nums[i] != nums[index])
        {
            swap(nums[i], nums[index]);
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] != i + 1)
        {
            ans = i + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr{0, 3, 3, 4, 1};
    int ans = missingNumber(arr);
    cout << "Missing number is: " << ans;
    return 0;
}