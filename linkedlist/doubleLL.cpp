#include <bits/stdc++.h>
using namespace std;
struct Node
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1, Node *next1, Node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node *convertToDLL(vector<int> &arr)
{

    Node *head = new Node(arr[0], nullptr, nullptr);
    Node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i], nullptr, temp);
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}

Node* deleteLastNode(Node *head)
{
    Node *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node *prev = temp->prev;
    prev->next = nullptr;
    temp->prev = nullptr;

    return head;
}

Node* deleteHead(Node *head) {
    if(head == nullptr || head->next == nullptr) {
        return nullptr;
    }
    Node* prev = head;
    head= head->next;

    head->prev = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

Node* deleteKthElement(Node* head, int k) {
    if(head == nullptr) return nullptr;
    Node* temp = head;
    int cnt = 0;

    while(temp != nullptr) {
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }

    Node* prev = temp->prev;
    Node* next = temp->next;

    if(prev ==nullptr && next == nullptr) return nullptr;

    if(prev == nullptr) return deleteHead(head);

    else if(next == nullptr) return deleteLastNode(head);

    prev->next = next;
    next->prev = prev;

    temp->next = nullptr;
    temp->prev = nullptr;

    delete temp;
    return head;
}

void deleteNode(Node* temp) {
    Node* prev = temp->prev;
    Node* front = temp->next;

    if(front == nullptr) {
        prev->next = nullptr;
        temp->prev = nullptr;

        delete temp;
        return;
    }

    prev->next = front;
    front->prev = prev;

    temp->next = temp->prev = nullptr;

    delete temp;

}


Node* insertAtHead(Node* head) {
    Node* temp = new Node(10,head,nullptr);
    
    if(head == nullptr || head->next == nullptr) {
        head->prev = temp;
    }

    head->prev = temp;
    head = temp;

    return head;
    
}

Node* insertAtKPosition(Node* head, int k) {
    Node* temp = head;
    int cnt = 0;

    while(temp->next != nullptr) {
        cnt++;

        if(cnt == k) {
            cout<<cnt<<endl;
            break;
        }

        temp = temp->next;
    }

    Node* prev = temp->prev;
    Node* front = temp->next;

    Node* kthNode = new Node(10,temp ,prev);

    prev->next = kthNode;
    temp->prev = kthNode;

    return head;
}

Node* insertAtTail(Node* head) {
    Node* tail = head;

    if(tail == nullptr) return new Node(10,nullptr,nullptr);

    if(tail->next == nullptr) {
        Node* newNode = new Node(10,nullptr,tail);
        return head;
    }

    while(tail->next != nullptr) {
        tail = tail->next;
    }

    Node* newNode = new Node(10,nullptr,tail);
    tail->next = newNode;
    return head;

}


int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    Node *head = convertToDLL(v);

    Node *temp = insertAtTail(head);
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
