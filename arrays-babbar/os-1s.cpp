#include <bits/stdc++.h>
using namespace std;

void count0s1s(vector<int> arr)  {
    int zcount = 0;
    int ocount = 0;

    for(int i =0 ;i< arr.size();i ++) {
        if(arr[i] ==0) {
            zcount++;
        } else {
            ocount++;
        }
    }
    cout<<"Zeros count is: "<<zcount<<endl;
    cout<<"Ones count is: "<<ocount<<endl;

}

int main() {
    vector<int> arr = {1,0,1,0,0,1,1,1};
    count0s1s(arr);
    return 0;
}
