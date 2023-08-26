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
        int star = n-i;
        while(star)
        {
            cout<<"*";
            star--;
        }
        int j=1;
        while(j <=i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}




//    1
//   22
//  333
// 4444



