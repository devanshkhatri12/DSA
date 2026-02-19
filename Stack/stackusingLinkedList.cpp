#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node* next;
    int data;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedListStack {
    private:
        Node* head;
        int size;

    public:
        LinkedListStack(){
            head = nullptr;
            size = 0;
        }

    void push(int x){
        Node* element = new Node(x);
        element->next = head;
        head = element;

        size++;
    }

    int pop()
    {
        if(head == NULL){
            cout<<"Empty LinkedList"<<endl;
            return -1;
        }
        
        int value = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;

        size--;

        return value;
    }

    int top()
    {
        if(head == NULL){
            cout<<"Empty Linked List"<<endl;
            return -1;
        }

        return head->data;
    }

    bool isEmpty(){
        return (size == 0);
    }
};


int main()
{
    LinkedListStack st;

    // List of commands
    vector<string> commands = {"LinkedListStack", "push", "push", "pop", "top", "isEmpty"};

    // List of inputs
    vector<vector<int>> inputs = {{}, {3}, {7}, {}, {}, {}};

    for (int i = 0; i < commands.size(); ++i) {
        if (commands[i] == "push") {
            st.push(inputs[i][0]);
            cout << "null ";
        } else if (commands[i] == "pop") {
            cout << st.pop() << " ";
        } else if (commands[i] == "top") {
            cout << st.top() << " ";
        } else if (commands[i] == "isEmpty") {
            cout << (st.isEmpty() ? "true" : "false") << " ";
        } else if (commands[i] == "LinkedListStack") {
            cout << "null ";
        }
    }

    return 0;
}