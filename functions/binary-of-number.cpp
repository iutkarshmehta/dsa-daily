#include <bits/stdc++.h>
using namespace std;

void numTOBinary(int num) {
    int tempNum = 0;
    int rem = 0;
    int binary = 0;
    int binaryNum = 0;
    while(num>0){
        rem = num % 2;
        tempNum = num / 2;
        binary = binary* 10 + rem;
        num/=2;
    }

    while(binary>0) {
        int digit = binary %10;
        binaryNum = binaryNum * 10 + digit;
        binary = binary /10;
    }
    cout<< "Binary Number is: "<< binaryNum;
}

int main() {
    numTOBinary(11);
    return 0;
}
