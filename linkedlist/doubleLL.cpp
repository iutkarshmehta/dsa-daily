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
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    Node *head = convertToDLL(v);
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
