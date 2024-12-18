#include<bits/stdc++.h>
using namespace std;

/// @brief 
/// @param arr 
/// @return 
int find_unique(vector<int> arr) {
    //XOR of any element with zeror is the number itself
    int ans = 0;
    for (int i = 0 ; i< arr.size(); i++){
        ans = arr[i] ^ ans;
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ;  i< arr.size(); i++) {
        cin >> arr[i];
    }

    int uniqueAns = find_unique(arr);

    cout<< "Unique element is: "<< uniqueAns << endl;
}