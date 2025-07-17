#include <bits/stdc++.h>
using namespace std;

void findLargest( int arr[], int size, int i, int& mini) {

    if(i>=size) {
        return;
    }

    if(arr[i] < mini) {
        mini = arr[i];
    }

    findLargest(arr, size, i+1, mini);

}

int main() {
    int arr[5] = {10,20,60,50,61};
    int i = 0; 
    int mini = INT_MAX;
    findLargest(arr, 5, i, mini);
    cout<<mini<<endl;
    return 0;
}
