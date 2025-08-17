#include <bits/stdc++.h>
using namespace std;
struct Node{
    public: 
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }

};

Node* convertToLL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i< arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = mover -> next;
    }
    return head;
}

int length(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while(temp != nullptr) {
        temp = temp -> next;
        cnt++;
    }
    return cnt;
}
int main() {
    vector<int> arr{1,2,3,4,5};
    Node* head = convertToLL(arr);//Never play with head
    Node* temp = head;
    while(temp != nullptr) {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }

    cout<<"Len of LL is: "<<length(head);
    return 0;
}
