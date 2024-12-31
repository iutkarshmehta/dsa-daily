#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin>>size;
    int arr[size];
    map<int ,int> hashMap;
    for(int i = 0; i< size; i++) {
        cin>>arr[i];
        hashMap[arr[i]]++;
    }
    
    int q;
    cin>> q;
     while(q--) {
        int digit;
        cin>>digit;
        cout<< hashMap[digit]<<endl;
     }
}