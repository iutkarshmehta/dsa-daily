#include <bits/stdc++.h>
using namespace std;

void printSubArray(vector<int>&arr,int s,int e  ) {
    if(e==arr.size()){
        return;
    }
    

    for(int i = s;i<=e;i++) {
        cout<<arr[i];
    }

    cout<<endl;

    printSubArray(arr,s,e+1);
}
int main() {
    vector<int> arr{1,2,3,4,5};
    for(int i = 0;i<arr.size();i++) {
        int end = i;
        printSubArray(arr,i,end);
    }
    return 0;
}
