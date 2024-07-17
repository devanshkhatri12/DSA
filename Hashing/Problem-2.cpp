#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{
    string s;
    cin>>s;

    // pra-computation
    // store for all -> ('a' - 'z'), ('A' - 'Z'), (0 - 9) and (special char.)
    int hash[256] = {0};
    for(int i=0; i<s.size(); i++)
    {
        // for all
        hash[s[i]] += 1;

        // for lowercase
        hash[s[i] - 'a'] += 1;

        // for uppercase
        hash[s[i] -'A'] += 1;
    }

    int q;
    cout<<"number of query ";
    cin>>q;

    while(q--)
    {
        char ch;
        cin>>ch;

        // for all 
        cout<<hash[ch]<<" times present in array"<<endl;

        // for lowercase
        cout<<hash[ch-'a']<<" times present in array"<<endl;

        // for uppercase
        cout<<hash[ch-'A']<<" times present in array"<<endl;
    }
}
