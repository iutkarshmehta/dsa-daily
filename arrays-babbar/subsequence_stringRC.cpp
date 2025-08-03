#include <bits/stdc++.h>
using namespace std;

void subSequence(string str, int i, string ans) {
    if(i>=str.length() ) {
        cout<<ans<<" ";
        return;
    }

    
    ///exclude
    subSequence(str, i+1,ans);

    ///include
    ans.push_back(str[i]);
    subSequence(str,i+1,ans);
    

}

int main() {
    string str = "abc";
    string ans = "";
    subSequence(str,0,ans);
    return 0;
}
