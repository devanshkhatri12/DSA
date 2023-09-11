#include<iostream>
#include<map>
using namespace std;


void print(map<int,string> m)
{
    cout<<m.size()<<endl;
    for(auto it : m)
    {
        cout<<it.first<<" "<<it.second<<" "<<endl;
    }
    cout<<endl;
}


int main() 
{
    map<int,string> m;

    m[1] = "abc";
    m[2] = "bcd";
    m[4] = "def";
    m.insert({3,"cde"});
    m[2] = "BCD";

    // print(m);


// find() -> time comlexity O(log(n))
    auto it = m.find(2);
    if(it == m.end())
    {
        cout<<"NO value";
    }
    else
    {
        cout<<(*it).first<<" "<<(*it).second<<" "<<endl;
    }



 // erase() ->  time comlexity O(log(n))
    auto i = m.find(6);

    if(i != m.end())
    {
        m.erase(i);
    }
    else
    {
        print(m);
    }


}