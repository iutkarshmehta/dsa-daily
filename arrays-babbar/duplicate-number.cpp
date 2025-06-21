#include <bits/stdc++.h>
using namespace std;

void duplicateNumber(vector<int> arr) {
    int ans = 0;
    for(int i = 0;i<arr.size(); i++) {
        int index = abs(arr[i]);
         if (arr[index] < 0) {
            ans = index;
         }
         arr[index] *= -1;
    }
    cout<<"Duplicate is: " <<ans;
}

int main() {
    vector<int> arr{1,2,3,4,2};
    duplicateNumber(arr);
    return 0;
}
