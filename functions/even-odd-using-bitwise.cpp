#include <bits/stdc++.h>
using namespace std;

void findSetBits(int bits) {
    if(bits & 1) {
        cout<<"Number is odd";
    } else {
        cout<< "Number is even";
    }
}

int main() {
    findSetBits(11);
    return 0;
}
