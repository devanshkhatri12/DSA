#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;           //it follow  FIFO -> first in first out 
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);


    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}