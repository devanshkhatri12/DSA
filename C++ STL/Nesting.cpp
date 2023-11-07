#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string,string>,vector<int>>  m;

    int n;
    cout<<"no. of inputs"<<endl;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        string first_name , last_name;
        cin>>first_name >> last_name;

        int subjects_marks;
        cin>>subjects_marks;

        for(int i=0; i<subjects_marks; i++)
        {
            int x;
            cin>>x;
            m[{first_name,last_name}].push_back(x);
        }
    }
    for(auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &marks = pr.second;

        cout<<full_name.first<<" "<<full_name.second<<endl;
        cout<<marks.size()<<endl;
    }
}