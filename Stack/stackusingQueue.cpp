#include<bits/stdc++.h>
using namespace std;

class stackusingQueue{
    private:
    queue<int> q;

    public:
    stackusingQueue(){}

    void push(int x)
    {
        int s = q.size();
        q.push(x);

        for(int i=1; i<=s; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int top()
    {
        return q.front();
    }

    int pop(){
        int n = q.front();
        q.pop();

        return n;
    }

    bool isEmpty(){
        return q.empty();
    }
};

int main()
{
    stackusingQueue st;

    vector<string> commands = {"stackusingQueue", "push", "push", "pop", "top", "isEmpty"};
    vector<vector<int>> inputs = {{}, {4}, {8}, {}, {}, {}};

    for(int i=0; i<commands.size(); ++i)
    {
        if(commands[i] == "push"){
            st.push(inputs[i][0]);
            cout<<"null"<<" ";
        }else if(commands[i] == "pop"){
            cout<<st.pop()<<" ";
        }else if(commands[i] == "top"){
            cout<<st.top()<<" ";
        }else if(commands[i] == "isEmpty"){
            cout<<(st.isEmpty() ? "true" : "false")<<" ";
        }else if(commands[i] == "stackusingQueue"){
            cout<<"null"<<" ";
        }
    }

    return 0;

}