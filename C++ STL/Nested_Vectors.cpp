#include<iostream>
#include<vector>
using namespace std;

void printvec( vector<pair<int,int>> v)
{
    cout<<"printing vector elements "<<endl; 
    cout<<v.size()<<endl;
    for(int i=0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<" "<<endl;
    }
    cout<<endl;
}


// int Inputvec(vector<pair<int,int>> v,int n)
// {
//     cout<<"Enter elemts"<<endl;
//     for(int i=0; i<n; i++)
//     {
//         int x ,y;
//         cin>>x>>y;
//         v.push_back({x,y});
//     }
// }


int main()
{
    vector<pair<int,int>> v ;
    // = {{1,2},{2,3},{3,4}} 
    // v = ;
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    cout<<"Enter elemts"<<endl;
    for(int i=0; i<n; i++)
    {
        int x ,y;
        cin>>x>>y;
        v.push_back({x,y}); 
    }

    // Inputvec(v,3);
    printvec(v);
}