#include <bits/stdc++.h>
using namespace std;

void maxEle(vector<int> & arr, int i, int& max) {
    if(i >= arr.size()) {
        return;
    }
    if(arr[i] > max) {
        max = arr[i];
    }
    maxEle(arr, i+1, max);
}

int main() {
    vector<int> arr{1,2,3,4,5,6};
    int i =0;
    int max = INT_MIN;
    maxEle(arr, i,max);
    cout<< max<<endl;
    return 0;
}
