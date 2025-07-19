#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> arr, int i,int sum, int& mini){
//base case
if(i>=arr.size()) {
    mini = max(sum,mini);
    return;
}

//include
solve(arr,i+2,sum+arr[i],mini);
//exclude
solve(arr,i+1,sum,mini);

}
int main() {

    vector<int> arr {2,1,4,9};
    int i =0;
    int maxi = INT_MIN;
    int sum = 0;

    solve(arr,i,sum,maxi);

    cout<<maxi<<endl;
    
    return 0;
}
