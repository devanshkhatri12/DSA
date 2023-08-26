#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;


    int i=1;
    while(i <= n)
    {
        int j=1;
        while(j <= n)
        {
            char c = 'A'+i-1;
            cout<<c;
            j++;
        }
        cout<<endl;
        i++;
    }
}



// A A A 
// B B B 
// C C C 
