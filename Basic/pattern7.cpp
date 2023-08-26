#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Size"<<endl;
    cin>>n;

    int i=1;
    char c = 'A';
    while(i<=n)
    {
        int j=1;
        while(j <= i)
        {

            cout<<c;
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }
}


// A 
// B C 
// D E F 
// G H I J
