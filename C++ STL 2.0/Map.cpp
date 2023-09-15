// QUE.  Given N string , print unique strings in lexiographical order with their frequency 
// N <= 10^5
// |S| <= 100 



#include<iostream>
#include<bits/stdc++.h>
// #include<map>
using namespace std;

int main()
{
    map<string,int> m;

    int n;
    cout<<"enter input size"<<endl;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        string s;
        cout<<"enter string as input";
        cin>>s;
        m[s]++;
    }

    cout<<"Unique string and frequency as output"<<endl;
    for(auto pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<" "<<endl;
    }
}


// INPUT : abc , def , abc , ghj , jkl , ghj , ghj ,abc