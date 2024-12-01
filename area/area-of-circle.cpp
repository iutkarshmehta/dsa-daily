#include<bits/stdc++.h>
using namespace std;
float calculate_area(int radius){
    return 3.14 * radius * radius ;
}

int main(){
    int radius;
    cout << "Entre the radius of the circle"<< endl;
    cin >> radius;
    int area = calculate_area(radius);
    cout<< "The area of circle is: "<< area <<endl;
    return 0;
}