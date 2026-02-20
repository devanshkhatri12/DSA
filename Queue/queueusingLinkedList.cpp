#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node* next;
    int data;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedListQueue{
    private:
    Node* start;
    Node* end;
    int size;

    public:
    LinkedListQueue(){
        Node* start = nullptr;
        Node* end = nullptr;
        int size = 0;
    }

    void push(int x)
    {
        Node* element = new Node(x);
        if(start == nullptr)
        {
            start = end = nullptr;
        }
        else{
            end->next = element;
            end = element;
        }

        size++;
    }

    int peek()
    {
        if(start == nullptr){

            return -1;
        }

        return start->data;

    }

    int pop()
    {
        if(start == nullptr)
        {
            return -1;
        }

        int value = start->data;
        Node* temp = start;
        start = start->next;
        delete temp;

        size--;

        return value;
    }

    bool isEmpty(){
        return (size == 0);
    }
};


int main()
{
    LinkedListQueue q;

    // List of commands
    vector<string> commands = {"LinkedListQueue", "push", "push", "peek", "pop", "isEmpty"};

    // List of inputs
    vector<vector<int>> inputs = {{}, {3}, {7}, {}, {}, {}};

    for (int i = 0; i < commands.size(); ++i) {
        if (commands[i] == "push") {
            q.push(inputs[i][0]);
            cout << "null ";
        } else if (commands[i] == "pop") {
            cout << q.pop() << " ";
        } else if (commands[i] == "top") {
            cout << q.peek() << " ";
        } else if (commands[i] == "isEmpty") {
            cout << (q.isEmpty() ? "true" : "false") << " ";
        } else if (commands[i] == "LinkedListStack") {
            cout << "null ";
        }
    }

    return 0;

}