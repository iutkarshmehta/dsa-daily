#include <bits/stdc++.h>
using namespace std;
struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *converttoLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node *deleteKthNode(Node *head, int k)
{
    if (head == nullptr)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int cnt = 0;
    Node *temp = head;
    Node *prev = nullptr;

    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

Node *deleteStartNode(Node *head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *deleteTailNode(Node *head)
{
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node *deleteElement(Node *head, int ele)
{
    if (head == nullptr)
        return head;

    if (head->data == ele)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *temp = head;
    Node *prev = nullptr;

    while (temp != nullptr)
    {
        if (temp->data == ele)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *insertAtHead(Node *head, int ele)
{
    if (head == nullptr)
    {
        return new Node(ele);
    }

    return new Node(ele, head);
}

Node *insertAtTail(Node *head, int ele)
{
    if (head == nullptr)
    {
        return new Node(ele);
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(ele);
    temp->next = newNode;
    return head;
}

Node *insertAtKthPosition(Node *head, int k, int ele)
{
    if (head == nullptr)
    {
        if (k == 1)
        {
            return new Node(ele);
        }
        else
        {
            return head;
        }
    }

    if (k == 1)
    {
        return new Node(ele, head);
    }

    Node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k - 1)
        {
            Node *x = new Node(ele, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node *insertBeforeValue(Node *head, int ele, int val)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    if (head->data == val)
    {
        return new Node(ele, head);
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        if (temp->next->data == val)
        {
            Node *x = new Node(ele, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    Node *head = new Node(v[0]);
    Node *pt = converttoLL(v);

    // while( pt != nullptr) {
    //     cout<<pt -> data <<" ";
    //     pt = pt -> next;
    // }

    Node *pt1 = insertBeforeValue(pt, 3, 5);
    while (pt1 != nullptr)
    {
        cout << pt1->data << " ";
        pt1 = pt1->next;
    }
    return 0;
}
