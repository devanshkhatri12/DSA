#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Size of Array ";
    cin>>n;

    map<int , int> mp;

    int arr[n];
    cout<<"Enter array Elements ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }


    int q;
    cout<<"No. of query ";
    cin>>q;

    while(q--)
    {
        int num;
        cin>>num;

        cout<<mp[num]<<" Times occur"<<endl;
    }

}