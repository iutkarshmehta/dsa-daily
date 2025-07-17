#include <bits/stdc++.h>
using namespace std;

void prepareHash(string str) {
    vector<int> arr(26,0);
    int i = 0;
    while(i < str.size()) {
        int index = str[i++] - 'a';
        arr[index]++;
    }

    cout<< "alphabets are: ";
    for(auto it: arr) {
        cout<< it << " ";
    }
}

int main() {
    string str = "Utkarshmehtaisagooddeveloper";
    prepareHash(str);
    return 0;
}
