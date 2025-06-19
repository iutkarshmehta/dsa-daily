#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> arr1, vector<int> arr2) {
    vector<int> ans;
    for(int i =0; i< arr1.size(); i++ ) {
        for(int j =0; j< arr2.size(); j++) {
            if(arr1[i] == arr2[j]) {
                ans.push_back(arr1[i]);
            }
        }
    }
    return ans;
}

int main() {
    vector<int> arr1{1,2,3,4,5};
    vector<int> arr2{2,3,7,8};
    vector<int> ans = intersection(arr1,arr2);
    for(auto it: ans) {
        cout<< it<<" ";
    }
    
    return 0;
}
