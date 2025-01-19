#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int s1 = nums1.size();
        int s2 = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set<int> st;
        while(i<s1 && j< s2) {
            if(nums1[i]<nums2[j]) {
                i++;
            }else if(nums1[i] > nums2[j]) {
                j++;
            }
            else if(nums1[i] == nums2[j]){
                st.insert(nums1[i]);
                i++;
                j++;
            }
        }
        vector<int> ans(st.begin(),st.end());
        return ans;
    }
};