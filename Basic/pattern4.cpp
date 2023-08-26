#include<iostream>
using namespace std;


int main()
{
        int n;
    cout<<"Enter size"<<endl;
    cin>>n;


    int i=1;
    char start ='A';
    while(i <= n)
    {
        int j=1;            
        while(j <= n)
        {

            cout<<start;
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
}


// A B C 
// D E F 
// G H I 