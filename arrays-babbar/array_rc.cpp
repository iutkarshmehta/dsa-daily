#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> arr, int n) {
    if(n == 0) return arr[0];
    return max(arr[n-1], findMax(arr, n-1));
}

int findMin(vector<int> arr, int n) {
    if(n == 0) return arr[0];
    return min(arr[n-1], findMin(arr, n-1));
}

int main() {
    vector<int> arr = {2,3,4};
    int max = findMax(arr, arr.size());
    cout<<"The max element is: "<< max<<endl;
    int min = findMin(arr, arr.size());
    cout<<"The max element is: "<< min;
    return 0;
}
