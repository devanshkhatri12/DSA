#include<iostream>
#include<vector>
using namespace std;


void printvec( vector<int> &v)
{
    cout<<v.size()<<endl;
    cout<<"printing vector elements "<<endl; 

    for(int i=0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    int N;
    cout<<"size of arry of vector"<<endl;
    cin>>N;

    vector<int> v[N];

    for(int i=0; i< N; i++)
    {
        int n;
        cout<<"ith vector size"<<endl;
        cin>>n;
        for(int j=0; j<n; j++)
        {
            int x;
            cout<<"push vector elements";
            cin>>x;
            v[i].push_back(x);
        }
    }

    for(int i=0; i<N; i++)
    {
        cout<<"print ith vector of vector"<<endl;
        printvec(v[i]);
    }
}