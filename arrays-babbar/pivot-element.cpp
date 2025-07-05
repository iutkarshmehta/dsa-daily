#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s =0;
        int e = nums.size() -1;
        int mid = s +(e -s) / 2;

        while(s<=e) {
            if(s == e) {
                return s;
            }

            if(mid <= e && nums[mid] > nums[mid + 1]) {
                return mid;
            }

            if(mid -1 >= s && nums[mid] < nums[mid - 1]) {
                return mid -1;
            }

            if(nums[s] < nums[mid]) {
                e= mid -1;
            } else{
                s = mid +1;
            }
            mid = s +(e -s) / 2;
        }
        return -1;
    }
};