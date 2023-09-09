// for this you need c++ version 11 or above for compiliting

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};
    
    cout<<"printing elements of vector using range base loops"<<endl;
    for(int value : v)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    vector<pair<int,int>> vp = {{1,2},{2,1}};

    cout<<"printing pair using range based loop"<<endl;
    for(pair<int,int> part : vp)
    {
        cout<<part.first<<" "<<part.second<<endl;
    }

    // you don't need to specify a  datatype of iterator with the help of auto keyword 
    cout<<"iterate loop using auto keyword"<<endl;
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        cout<<(*it)<<" ";
    }cout<<endl;
}