#include<bits/stdc++.h>
using namespace std;

int decimalToBinaryM1(int n) {
    int i = 0;
    int binaryNumber = 0;
    while(n>0){
        int bit=n%2;
        binaryNumber = bit * pow(10, i++) + binaryNumber;
        n = n/2;

    }
    return binaryNumber;
}

int decimalToBinaryM2(int n) {
    int i = 0;
    int binaryNumber = 0;
    while(n>0) {
        int bit = n & 1;
        binaryNumber = bit * pow(10, i++) + binaryNumber;
        n = n >> 1;

    }
    return binaryNumber;
} 

int main(){
    int n;
    cin>>n;
    int binaryNumber = decimalToBinaryM2(n);
    cout<<"The binary number is: "<< binaryNumber << endl;
}