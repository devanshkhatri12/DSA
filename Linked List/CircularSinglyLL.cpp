#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* nextAddress;

    Node(int data)
    {
        this->data = data;
        this->nextAddress = NULL;    
    }

    ~Node()
    {
        int value = this->data;
        while(this->nextAddress != NULL)
        {
            delete nextAddress;
            nextAddress = NULL;     
        }
        cout<<"Memory is freee for node and data"<<value<<endl;
    }
    

};

void deleteNode(){

}

// ek address ko ek baar hi print krana
void print(Node* &tail)
{
    Node* temp = tail;

    do{
        cout<<tail->data<<" ";
        tail = tail->nextAddress;
    }while(tail != temp);
    cout<<endl;
}

void insertNode(Node* &tail, int element, int data)
{


    // empty list
    if(tail == NULL)
    {
        Node* temp = new Node(data);
        tail = temp;
        temp->nextAddress = temp;
    }
    // list is not empty
    else
    {
        Node*  curr = tail;

        while(curr->data != element)
        {
            curr = curr->nextAddress;
        }

        // data found

        Node* temp = new Node(data);
        temp->nextAddress = curr->nextAddress;
        curr->nextAddress = temp;

    }
}


int main()
{
    Node* tail = NULL;

    insertNode(tail, 1, 10);
    print(tail);

    insertNode(tail, 10, 11);
    print(tail);

    insertNode(tail, 11, 13);
    print(tail);

    insertNode(tail, 11, 12);
    print(tail);
}