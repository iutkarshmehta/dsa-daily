#include <bits/stdc++.h>
using namespace std;

int length(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

bool checkPalindrome(char arr[] ) {
    int i = 0;
    int e = length(arr) - 1;
    while(i<=e) {
        if(arr[i] != arr[e]) {
            return false;
        }
        i++;
        e--;
    }
    return true;
}

int main() {
   char name[100];
    cin.getline(name, 50);
    int isPalindrome = checkPalindrome(name);

    if(isPalindrome) {
        cout<<"Entered string is palindrome";
    } else {
        cout<< "Entered number is not palindrome";
    }
    return 0;
}
