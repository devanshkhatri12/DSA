#include<bits/stdc++.h>
using namespace std;

class QueueArray {

    private:
        int *queueArray;
        int start, end;
        int currentSize, maxSize;

    public:
        QueueArray(){
            queueArray = new int[maxSize];
            start = -1;
            end = -1;
            currentSize = 0;
            maxSize = 10;
        }

    void push(int x){
        if(currentSize == maxSize){
            cout<<"Queue is Overflow.."<<endl;
            exit(1);
        }

        if(end == -1){
            start = 0;
            end = 0;
        }else{
            end = (end + 1)% maxSize;
        }

        queueArray[end] = x;
        currentSize++;
    }

    int pop(){
        if(start == -1){
            cout<<"Queue is already Empty"<<endl;
            exit(1);
        }

        int popped = queueArray[start];

        if(currentSize == 1){
            start = -1;
            end = -1;
        }else{
            start = (start + 1) % maxSize;
        }

        currentSize--;
        return popped;
        
    }

    // to get top Element or first Element
    int peek(){
        if(start == -1){
            cout<<"Queue is Empty.."<<endl;
            exit(1);
        }

        return queueArray[start];
    }

    bool isEmpty(){
        return (currentSize == 0);
    }
    
    

};

int main()
{
    QueueArray q;
    vector<string> commands = {"QueueArray", "push", "push", "top", "pop", "isEmpty"};
    vector<vector<int>> inputs = {{}, {5}, {10}, {}, {}, {}};


    for (size_t i = 0; i < commands.size(); ++i) {
        if (commands[i] == "push") {
            q.push(inputs[i][0]);
            cout << "null ";
        } else if (commands[i] == "pop") {
            cout << q.pop() << " ";
        } else if (commands[i] == "top") {
            cout << q.peek() << " ";
        } else if (commands[i] == "isEmpty") {
            cout << (q.isEmpty() ? "true" : "false") << " ";
        } else if (commands[i] == "ArrayStack") {
            cout << "null ";
        }
    }

    return 0;
}