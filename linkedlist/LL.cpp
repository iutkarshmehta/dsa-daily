#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};
int main() {
    vector<int> v {1,2,3,4,5};
    Node* y = new Node(v[2],nullptr);
    cout<<y->data;
    return 0;
}
