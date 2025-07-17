#include <bits/stdc++.h>
using namespace std;

void printDigits(int& num) {
    if( num == 0) {
        return;
    }
    int digit = num % 10;
    int newNum = num /10;
    printDigits(newNum);

    cout<<"Digit: "<<digit << endl;
}
int main() {
    int num = 786;
    printDigits(num);
    return 0;
}
