#include <bits/stdc++.h>
using namespace std;

int factorial(int number) {
    int temp = 1;
    if(number == 0) {
            return 1;
        }
    for(int i =number ;i>0; i--) {
        temp = temp * i;
        cout<< temp;
    }
    return temp;
}

int main() {
    int ans  = factorial(4);
    cout<< "Factorial of a number is: "<<ans;
    return 0;
}
