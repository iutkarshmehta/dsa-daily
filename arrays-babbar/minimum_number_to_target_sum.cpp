#include <bits/stdc++.h>
using namespace std;
int minSum(vector<int>& arr, int target) {
    if(target < 0) return INT_MAX;
    if(target == 0) return 0;

    int mini = INT_MAX;
    for(int i = 0; i< arr.size();i++) {
        int ans = minSum(arr,target - arr[i]);
        if(ans != INT_MAX) {
            mini = min(mini, ans + 1);
        }
    }
    return mini;
}

int main() {
    vector<int> arr{1,2};
    int target = 5;
    cout<<minSum(arr, 5);
    return 0;
}