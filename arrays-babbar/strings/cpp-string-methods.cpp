#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    cout<<"Length: "<<str.length()<<endl;
    cout<<"empty: "<<str.empty()<<endl;
    str.push_back('a');
    cout<<"Push Back: "<<str<<endl;
    str.pop_back();
    cout<<"Push Back: "<<str<<endl;
    cout<<"Substring is: "<<str.substr(2,5)<<endl;
    cout<<"Find method: "<<str.find("is")<<endl;
    cout<<"Erase method: "<<str.erase(0,3)<<endl;
    return 0;
}
