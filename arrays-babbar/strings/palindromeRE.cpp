#include <bits/stdc++.h>
using namespace std;

bool checkIsPalindrome(string& s, int st, int e) {

    if(st >= e) {
        return true;
    }

    if(s[st] != s[e]) {
        return false;
    }

    return checkIsPalindrome(s,st+1,e-1);
}
int main() {
    string s = "ABCDCBA";
    cout<<checkIsPalindrome(s, 0 , s.size() -1);
    return 0;
}
