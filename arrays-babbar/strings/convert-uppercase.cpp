#include <bits/stdc++.h>
using namespace std;

bool convertUppercase(char arr[] ) {
   int i = 0;
   while(arr[i] != '\0') {
    arr[i] = arr[i] -'a' +'A';
    i++;
   }
   cout<<"The updated string is: " << arr;
}

int main() {
   char name[100];
    cin.getline(name, 50);
    convertUppercase(name);

    return 0;
}
