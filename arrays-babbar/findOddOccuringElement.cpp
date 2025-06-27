#include <bits/stdc++.h>
using namespace std;

void findOddOccuringElement(vector<int> arr) {
    int s= 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e) {
        if(s == e) {
            cout<<"Index is: "<<s<<endl;
            cout<<"Element is: "<<arr[s];
            break;
        }
        if(mid%2==0) {
            if(arr[mid] == arr[mid+1]) {
                s= mid +2;
            }else {
                e= mid;
            }
        }else {
            if(arr[mid] == arr[mid-1]) {
                s = mid+1;
            }else {
                e = mid -1;
            }
        }
        mid = s + (e-s) /2;
    }
}

int main() {
    vector<int> arr{1,2,2,3,3,4,4,3,3,600,600,4,4,5,5};
    findOddOccuringElement(arr);
    return 0;
}
