#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;


    int i=1;
    while(i <= n)
    {
        int j=1;
        while(j < i)
        {
            cout<<" ";
            j++;
        }
        int num =n-i+1;
        while(j <= n)
        {
            cout<<j;
            num--;
            j++;
        }
        cout<<endl;
        i++;
    }
}