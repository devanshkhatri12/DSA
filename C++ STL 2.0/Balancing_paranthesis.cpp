#include<bits/stdc++.h>
#include<iostream>
using namespace std;

unordered_map<char,int> symbol = {{'[',-1},{']',1},{'{',-2},{'}',2},{'(',-3},{')',3}};
string isBalanced(string s)
{
    stack<char> st;
    for(char bracket: s)
    {
        if(symbol[bracket] < 0)
        {
            st.push(bracket);
        }
        else
        {
            if(st.empty())
                return "NO";
                char top = st.top();
                st.pop();
                if(symbol[top] + symbol[bracket] != 0)
                {
                    return "NO";
                }
        }
    }
    if(st.empty())
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int testcase;
    cout<<"no.of test case";
    cin>>testcase;


    while(testcase--)
    {
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
}