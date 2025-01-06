#include<bits/stdc++.h>
using namespace std;

/// @brief logic is inside the function, brute force is to solve using any of the sorting method.Quick,merge etc.
///optimized is using the iteretor method over each element.
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        for(auto it: arr) {
            if(it > largest) {
               largest = it; 
            }
        }
        return largest;
    }
};