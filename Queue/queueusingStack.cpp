#include<bits/stdc++.h>
using namespace std;

// approach 1: Using two Stacks where push operation is O(N)
class queueusingStack{
    private:
    stack<int> s1, s2;

    public:
    queueusingStack(){}

    void push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop(){
        if(s1.empty()) return -1;

        int topElement = s1.top();
        s1.pop();

        return topElement;
    }

    int peek(){
        if(s1.empty()) return -1;

        return s1.top();
    }

    bool isEmpty(){
        return s1.empty();
    }

};

int main()
{
    queueusingStack q;
    vector<string> commands = {"queueusingStack", "push", "push", "pop", "peek", "isEmpty"};
    vector<vector<int>> inputs = {{}, {2}, {1}, {}, {}, {}};

    for(int i=0; i<commands.size(); i++){
        if(commands[i] == "push"){
            q.push(inputs[i][0]);
            cout<<"null"<<" ";
        }else if(commands[i] == "pop"){
            cout<<q.pop()<<" ";
        }
        else if(commands[i] == "peek"){
            cout<<q.peek()<<" ";
        }
        else if(commands[i] == "isEmpty"){
            cout<<(q.isEmpty() ? "true" : "false")<<" ";
        }else if(commands[i] == "queueusingStack"){
            cout<<"null"<<" ";
        }
    }

    return 0;
}