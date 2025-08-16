#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};
int main() {
    Node* head = new Node();
    head->data = 10;
    head->next = nullptr;

    Node* second = new Node();
    head->data = 20;
    head->next = nullptr;

    head->next = second;

    cout<<head->data<<" is the data part of the node"<<endl;
    cout<<head->next<<" is the pointer to the next node"<<endl;
    cout<<head->next<<" is the pointer of the second variable<<endl";
    cout<<second;
    return 0;
}
