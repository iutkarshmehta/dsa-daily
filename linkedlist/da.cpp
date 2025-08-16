#include <bits/stdc++.h>
using namespace std;

int main() {
    int* num = new int;
    *num = 42;
    cout<<*num<<endl;
    cout<<num<<" This is the address"<<endl;

    int* arr = new int[5];

    for(int i = 0; i< 5;i++) {
        arr[i] = i+1;
    }

    for(int i = 0; i< 5;i++) {
        cout<<arr[i]<< " ";
    }
    delete num;
    delete[] arr;
    return 0;
}
