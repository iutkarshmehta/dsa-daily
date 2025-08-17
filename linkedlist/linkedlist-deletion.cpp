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

Node* converttoLL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}
Node* deleteKthNode(Node* head, int k) {
    if(head == nullptr) return head;
    if(k==1) {
        Node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }

    int cnt = 0;
    Node* temp = head;
    Node* prev = nullptr;

    while(temp!=nullptr) {
        
        if(cnt == k) {
            prev -> next = prev ->next->next;
            delete temp;
            break;
        }
        cnt++;
        prev = temp;
        temp = temp -> next;
    }

    return head;

}
Node* deleteStartNode(Node* head) {
    Node* temp = head;
    head = head -> next;
    delete temp;
    return head;
}

Node* deleteTailNode(Node* head) {
    Node* temp = head;
    while(temp->next->next != nullptr) {
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = nullptr;
    return head;
}

int main() {
    vector<int> v{1,2,3,4,5,6};
    Node* head = new Node(v[0]);
    Node* pt = converttoLL(v);

    // while( pt != nullptr) {
    //     cout<<pt -> data <<" ";
    //     pt = pt -> next;
    // }

    Node* pt1 = deleteKthNode(pt,2);
    while(pt1 != nullptr) {
        cout<<pt1 -> data<< " ";
        pt1 = pt1 -> next;
    } 
    return 0;
}
