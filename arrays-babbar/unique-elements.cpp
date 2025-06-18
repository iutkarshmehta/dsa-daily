#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,3,2,4,4,5,1};
    int ans = 0;
    for(int i = 0 ;i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }
    cout<<"The unique element is: "<< ans;
    return 0;
}
