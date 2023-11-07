// QUE -> Given N string , print unique strings in lexiographical order 
// N <= 10^5
// |S| <= 100000



#include<iostream>
#include<set>
using namespace std;

void print(set<string> s)
{
    for(auto value : s)
    {
        cout<<value<<endl;
    }
    cout<<endl;
}

int main()
{
    set<string> s;

    int n;
    cout<<"Size of input"<<endl;
    cin>>n;

    cout<<"Enter strings"<<endl;
    for(int i=0; i<n; i++)
    {
        string st;
        cin>>st;
        s.insert(st);
    }
    cout<<endl;

    print(s); 
    
}