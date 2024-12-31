#include <bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n) {
    unordered_map<int,int> mapp;

    for(int i = 0;i<n;i++) {
        mapp[arr[i]]++;
    }

    int minfreq = n,maxfreq = 0;
    int minEle = 0,maxEle = 0;

    for(auto it : mapp) {
        int count = it.second;
        int element = it.first;

        if(count > maxfreq) {
            maxEle = element;
            maxfreq = count;
        }

        if(count < minfreq) {
            minEle = element;
            minfreq = count ; 
        }
    }

    cout<< "The highest frequency element is: "<<maxfreq<<endl;
    cout<< "The lowest frequency element is: "<<minEle<<endl;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    frequency(arr,n);
}