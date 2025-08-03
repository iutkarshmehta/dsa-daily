#include <bits/stdc++.h>
using namespace std;

void findLastOcc(string str, int&ans, int i, char ch) {

    if(i>= str.size()) {
        return;
    }

    if(str[i] == ch) {
        ans = i;
    }

    findLastOcc(str,ans,i+1,ch);
}

int main() {
    string str = "bcdedgdddd";
    int ans = -1;
    int i = 0;
    char ch = 'b';
    findLastOcc(str,ans,i,ch);
    cout<<ans;
    return 0;
}
