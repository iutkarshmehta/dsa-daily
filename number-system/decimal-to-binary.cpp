#include<bits/stdc++.h>
using namespace std;

/// @brief converts decimal to binary using division method
/// @param n number 
/// @return binary number
int decimalToBinaryM1(int n) {
    int i = 0;
    int binaryNumber = 0;
    while(n>0){
        int bit = n % 2;
        binaryNumber = bit * pow(10, i++) + binaryNumber;
        n = n / 2;

    }
    return binaryNumber;
}
/// @brief decimal to binary using bit operation
/// @param n number 
/// @return binary number
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

/// @brief converts binary number to decimal
/// @param n is the decimal number
/// @return decimal number of binary
int binaryToDecimal(int n){
    int decimalNumber = 0;
    int i = 0;
    while(n > 0){
        int bit = n % 10;
        decimalNumber = bit * pow(2, i++) + decimalNumber;
        n /= 10;
    }
    return decimalNumber;
}

int main(){
    int n;
    cin>>n;
    int decimalNumber = binaryToDecimal(n);
    cout<<"The decimal number is: "<< decimalNumber << endl;
}