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
        char c = 'A'+n-i;
        while(j <= i)
        {
            cout<<c;
            j++;
            c++;
        }
        cout<<endl;
        i++;
    }
}




// D 
// C D 
// B C D 
// A B C D 
