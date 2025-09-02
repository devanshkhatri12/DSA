#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* address;
    
    // constructor
    Node(int data)
    {
        this->data = data;
        this->address = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if(this->address != NULL)
        {
            delete address;
            this->address = NULL;
        }
    }
    
};

void insertAtHead(Node* &head, int data)
{
    Node* temp = new Node(data);
    
    temp->address = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data)
{
    Node* temp = new Node(data);
    
    tail->address = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int data)
{
    // if insert at first
    if(position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    
    Node* temp = head;
    int count = 1;
    
    // if insert at Last
    if(temp->address == NULL)
    {
        insertAtTail(tail, data);
    }
    
    
    while(count < position-1)
    {
        
        temp = temp->address;
        count++;
    }
    
    Node* nodeToInsert = new Node(data);
    
    nodeToInsert->address = temp->address;
    temp->address = nodeToInsert;
}

void deleteNode(int position, Node* &head)
{
    // delete first node
    if(position  == 1)
    {
        Node* temp = head;
        head = head->address;

        // memory free start node
        temp->address = NULL;
        delete temp;
    }
    // delete last or middle node
    else{
        Node* current = head;
        Node* previous = NULL;

        int count = 1;
        if(count < position)
        {
            previous = current;
            current = current->address;
            count++;
        }

        previous->address = current->address;
        current->address = NULL;

        delete current;
    }
}

void print(Node* &head)
{
    Node* temp = head;
    
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->address;
    }
    cout<<endl;
}

int main() {
    
    Node* node = new Node(100);
    
    cout<<node->data<<endl;
    cout<<node->address<<endl;
    
    Node* head = node;
    Node* tail = node;
    
    // insertAtHead(head, 200);
    // insertAtHead(head, 300);
    // print(head);
    
    insertAtTail(tail, 125);
    insertAtTail(tail, 150);

    
    
    insertAtPosition(tail, head, 2, 120);
    
    // insert at Frist
    insertAtPosition(tail, head, 1, 99);
    
    // insert at last
    insertAtPosition(tail, head, 6, 175);
    print(head);

    deleteNode(5, head);
    print(head);
    
    
    return 0;
}