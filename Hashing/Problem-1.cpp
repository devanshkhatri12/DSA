#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// globally -> max size we agve in int is <10^9
int hashh[100000000];
int main()
{
    int n;
    cout<<"size of array";
    cin>>n;

    cout<<"Enter array elemt";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // pre-computation
    // inside main -> max size we gave in int is <10^6
    // int hash[100000] = {0};
    for(int i=0; i<n; i++)
    {
        hashh[arr[i]] += 1;
    }

    int q;
    cout<<"size of query ";
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;

        cout<<hashh[num]<<"times"<<endl;
    }
}