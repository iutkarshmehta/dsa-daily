#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int s, int e, int x) {
    while(s<=e) {
        int mid = (s+ e)/2;
        if(arr[mid] == x) {
            return mid;
        } else if(arr[mid] >x) {
            e = mid -1;
        } else {
            s = mid +1;
        }
    }
    return -1;
}
int exponentialSearch(vector<int> arr, int x) {
    int i = 0;
    int j = 1;
    int n = arr.size() -1;
     while(j< arr.size() && arr[j] <= x) {
        i = j;
        j = j * 2;
     }
     
     int mini = min(j, n);
     return binarySearch( arr, i,mini, x);
}

int main() {
    vector<int> arr{2,4, 6 ,8, 10, 15, 26, 38, 72, 104, 150};
    int ans = exponentialSearch(arr, 150);
    cout<<"We found element at index: "<<ans;
    return 0;
}
