// QUE -> Given N string and Q queries. In each query you are given a string print yes if string is not present else print no.

// N <= 10^6
// |S| <= 100
// Q <= 10^6




#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<string> s;

    int n;
    cout<<"Size of input"<<endl;
    cin>>n;


    cout<<"Enter strings";
    for(int i=0; i<n; i++)
    {
        string st;
        cin>>st;
        s.insert(st);
    }

    int q;
    cout<<"input Queries"<<endl;
    cin>>q;

    cout<<"checking string is present or not "<<endl;
    while(q--)
    {
        string str;
        cin>>str;

        if(s.find(str) == s.end())
        {
            cout<<"not presemt"<<endl;
        }
        else
        {
            cout<<"present"<<endl;
        }
    }
}