#include <bits/stdc++.h>
using namespace std;

void findSetBits(int bits) {
    int count = 0;
    while(bits > 0) {
        if (bits & 1) {
            count ++;
        }
        bits = bits >> 1;
    }
    cout << "Set bits count: "<< count;
}

int main() {
    findSetBits(11);
    return 0;
}
