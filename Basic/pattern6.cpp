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
            char c = 'A'+i-1;
            cout<<c;
            j++;
        }
        cout<<endl;
        i++;
    }
}



// A 
// B B 
// C C C 