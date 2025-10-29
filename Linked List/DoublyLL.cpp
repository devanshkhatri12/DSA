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


    // destructor : for free up memory
    ~Node(){
        int value = this->data;
        while(nextAddress != NULL)
        {
            delete nextAddress;
            nextAddress = NULL;
        }
        cout<<"Memory free"<<endl;
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

    // if their no node in LL before
    if(head == NULL)
    {
        Node* temp = new Node(data);
        head = temp;

    }else{
        Node* temp = new Node(data);

        temp->nextAddress = head;
        head->prevAddress = temp;
        head = temp;
    }

}

void insertAtTail(Node* &tail , int data)
{
    if(tail == NULL)
    {
        Node* temp = new Node(data);
        tail = temp;

    }else{

        Node* temp = new Node(data);
        tail->nextAddress = temp;
        temp->prevAddress = tail;
        tail = temp;
    }

}

void insertAtPosition(Node* &head, Node* &tail, int position, int data)
{
    // insert at 1st position
    if(position == 1){
        insertAtHead(head, data);
        return ;
    }

    Node* temp = head;
    int count = 1;

    while(count < position-1)
    {
        temp = temp->nextAddress;
        count++;
    }

    // insert at last position
    if(temp->nextAddress == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // insert at rest position
    Node* nodeToInsert = new Node(data);

    nodeToInsert->nextAddress = temp->nextAddress;
    temp->nextAddress->prevAddress = nodeToInsert;
    temp->nextAddress = nodeToInsert;
    nodeToInsert->prevAddress = temp;

}

void deleteAtPositon(Node* &head, int position, int data)
{
    Node* temp = head;

    if(position == 1){
        temp->nextAddress->prevAddress = NULL;
        head = temp->nextAddress;
        temp->nextAddress = NULL;
        delete temp;
    }
    else{

    }

}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;

    // inserting data at head
    insertAtHead(head, 11);
    insertAtHead(head, 12);
    print(head);

    Node* tail = node1;

    // insert data at tail
    insertAtTail(tail, 9);
    insertAtTail(tail, 8);
    print(head);


    // insert data at any position
    insertAtPosition(head, tail, 2, 101);
    insertAtPosition(head, tail, 1, 102);
    print(head);

    insertAtPosition(head, tail, 8, 103);
    print(head);


    cout<<"Length of Doubly LL: "<<getLength(head)<<endl;



}