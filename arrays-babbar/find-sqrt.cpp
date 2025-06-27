#include <bits/stdc++.h>
using namespace std;
void findSqrt(vector<int> arr, int target) {
    int s = 0;
    int e = arr.size();
    int mid = s + (e -s ) / 2;
     while (s <= e) {
        if((arr[mid] * arr[mid]) == target) {
            cout<<"SquareRoot found, is: "<< arr[mid];
            break;
        } else if((arr[mid] * arr[mid]) < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e-s) / 2;
     }
}

int main() {
    vector<int> arr{2, 3, 4, 5};
    int target = 4;
    findSqrt(arr, target);
    return 0;
    
}
