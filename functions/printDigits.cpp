#include <bits/stdc++.h>
using namespace std;

void printDigits(int number) {
    int digit = 0;

    cout<<"Digits of a number are: ";
    while(number> 0) {
        digit = number % 10;
        number = number /10;
        cout<< digit << " ";
    }
}

int main() {
    printDigits(345);
    return 0;
}
