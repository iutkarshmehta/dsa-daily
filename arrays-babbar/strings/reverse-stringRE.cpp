#include <bits/stdc++.h>
using namespace std;

void reverse(string& s, int start, int end) {
    //base case
    if(start >= end) {
        return;
    }

    swap(s[start], s[end]);

    reverse(s,start+1,end-1);
}

int main()
{
    string str = "abcddgdf";
    
    reverse(str, 0, str.length()-1);
    cout<<str;
    return 0;
}