#include<iostream>
using namespace std;

int main()
{
        int n;
    cout<<"Enter Size"<<endl;
    cin>>n;

    int i=1;

    while(i<=n)
    {
        int j=1;
        while(j <= i)
        {
            char c = 'A'+i+j-2;
            cout<<c;
            j++;
        }
        cout<<endl;
        i++;
    }
}



// A 
// B C 
// C D E 
// D E F G