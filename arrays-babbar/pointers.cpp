#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 5;
    int* p = &a;
    int** ptr = &p;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;

    return 0;
}
