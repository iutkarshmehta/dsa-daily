#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;
        vector<int> temp(k);

        for (int i = 0; i < k; i++) {
            temp[i] = nums[size - k + i];
        }

        for (int i = size - 1; i >= k; i--) {
            nums[i] = nums[i - k];
        }

        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};