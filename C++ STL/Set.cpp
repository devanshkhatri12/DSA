// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(set<string> s)
{
    for(string value : s)
    {
        cout<<value<<endl;
    }
}

int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("xxx");
    s.insert("def");
    s.insert("xyz");

    print(s);

    auto it = s.find("xyz");
    if(it != s.end())
    {
        // cout<<(*it)<<endl;
        s.erase(it);
    }
    else
    {
        cout<<"not found"<<endl;
    }

}