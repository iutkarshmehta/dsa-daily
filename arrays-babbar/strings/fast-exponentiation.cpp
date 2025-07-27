#include <bits/stdc++.h>
using namespace std;

int expo(int a, int b ) {
    int ans = 1;

    while(b > 0) {
        if(b % 2 ==1) {
            ans = ans * a;
            b = b - 1;
        } else {
            b = b/2;
            a = a * a;
        }
    }
    return ans;
}

int main() {
    int a= 2;
    int b = 20;
    cout<<expo(a,b);
    return 0;
}
