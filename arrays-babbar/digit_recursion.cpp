#include <bits/stdc++.h>
using namespace std;
void printDigits(int num) {
    if(num <= 0) {
        return;
    }

    int digit = num %10;
    
    num = num / 10;
    printDigits(num);
    cout<<digit<<" ";
}

int main() {
    int num = 110;
    printDigits(num);
    return 0;
}
