#include <bits/stdc++.h>
using namespace std;

void moveNegativeToLeft(vector<int> &arr) {
    int l =0;
    int h = arr.size() -1;
     while( l < h) {
        if(arr[l] < 0) {
            l++;
        } else if(arr[h] > 0) {
            h--;
        } else {
            swap(arr[l],arr[h]);
        }
     }
}

int main() {
    vector<int> arr{-1,2,3,6,7,-10,-45};
    moveNegativeToLeft(arr);
    for(auto it: arr ) {
        cout<< it<< " ";
    }
    return 0;
}
