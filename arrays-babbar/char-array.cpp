#include <bits/stdc++.h>
using namespace std;

void printCharArray(char name[]) {
    int length = 0;
    int i =0;
    while(name[i] !='\0') {
        length++;
        i++;
    }
    cout<<"Length of array is: "<< length;
}

int main() {
    char name[100];
    cin.getline(name, 50);
    printCharArray(name);
    return 0;
}
