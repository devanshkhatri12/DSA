#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;            // it follow LIFO -> Last in first out
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
