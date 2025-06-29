#include <bits/stdc++.h>
#include<strings.h>
using namespace std;

int getLength(char name[]) {
    int length = 0;
    int i =0;
    while(name[i] !='\0') {
        length++;
        i++;
    }
    return length;
}

void reverseCharArray(char name[]) {
    int start = 0;
    int end = getLength(name) - 1;
    while(start <= end) {
        swap(name[start], name[end]);
        start++;
        end--;
    }
    
}

int main() {
    char name[100];
    cin.getline(name, 50);
    reverseCharArray(name);
    cout<<"Reveresed char array is: ";
    cout<<name;
    return 0;
}