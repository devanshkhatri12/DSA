#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter numbers"<<endl;
    cin>>n>>m;

    int max , min;

    if(n>m){
        max =n;
        min =m;
    }
    else{
        max =m;
        min=n;
    }
    

    cout<<"max number: "<<max<<endl;
    cout<<"min number: "<<min<<endl;
}