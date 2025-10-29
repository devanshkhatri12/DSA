#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* prevAddress;
    Node* nextAddress;

    // contructor
    Node(int data)
    {
        this->data = data;
        this->prevAddress = NULL;
        this->nextAddress = NULL;
    }

};

void print(Node* head)
{
    Node* temp = head;

    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->nextAddress;
    }
    cout<<endl;
}


// length of Doubly LL
int getLength(Node* head)
{
    int length = 0;
    Node* temp = head;

    while(temp != NULL)
    {
        length++;
        temp = temp->nextAddress;
    }

    return length;
}

void insertAtHead(Node* &head, int data)
{
    Node* temp = new Node(data);

    temp->nextAddress = head;
    head->prevAddress = temp;
    head = temp;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;

    insertAtHead(head, 11);

    print(head);

    cout<<"Length of Doubly LL: "<<getLength(head)<<endl;
}