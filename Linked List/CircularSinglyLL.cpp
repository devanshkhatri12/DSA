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
        cout<<"Memory is freee for node and data: "<<value<<endl;
    }
    

};

void deleteNode(){

}

// ek address ko ek baar hi print krana
void print(Node* &tail)
{

    if(tail ==NULL)
    {
        cout<<"List is empty"<<endl;
        return ;
    }
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

void deleteNode(Node* &tail , int element)
{
    //empty LL
    if(tail == NULL)
    {
        cout<<"List is empty"<<endl;
        return ;
    }
    else{
        Node* prev = tail;
        Node* curr = prev->nextAddress;

        while(curr->data != element)
        {
            prev = curr;
            curr = curr->nextAddress;
        }

        prev->nextAddress = curr->nextAddress;

        // only 1 node in LL
        if(prev == curr)
        {
            tail = NULL;
        }

        // only >= 2 node in LL
        else if(tail == curr)
        {
            tail = prev;
        }

        curr->nextAddress = NULL;
        delete curr;
    }
}


int main()
{
    Node* tail = NULL;

    insertNode(tail, 1, 10);
    // cout<<"Current tail at :"<<tail->data<<endl;
    print(tail);

    insertNode(tail, 10, 11);
    // cout<<"Current tail at :"<<tail->data<<endl;
    print(tail);

    insertNode(tail, 11, 13);
    // cout<<"Current tail at :"<<tail->data<<endl;
    print(tail);

    insertNode(tail, 11, 12);
    // cout<<"Current tail at :"<<tail->data<<endl;
    print(tail);

    insertNode(tail, 13, 14);
    // cout<<"Current tail at :"<<tail->data<<endl;
    print(tail);

    deleteNode(tail, 10);
    // cout<<"Current tail at :"<<tail->data<<endl;
    print(tail);

    deleteNode(tail, 12);
    // cout<<"Current tail at :"<<tail->data<<endl;
    print(tail);

    deleteNode(tail, 11);
    // cout<<"Current tail at :"<<tail->data<<endl;
    print(tail);

    return 0;
}