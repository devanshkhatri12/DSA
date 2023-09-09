#include<iostream>
#include<vector> 
using namespace std;


void printvec(vector<int> v1)
{
    cout<<v1.size()<<endl;
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;

    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     cin>>v.push_back(x);
    // }


    // vector<int> v1(10);
    vector<int> v1(10 , 1);  //it fill all ten places with 1
    v1.push_back(7);

    printvec(v1);

    v1.pop_back();

    printvec(v1);

}