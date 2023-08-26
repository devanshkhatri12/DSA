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
            char start = i+j-2+'A';
            cout<<start;
            j++;
        }
        cout<<endl;
        i++;
    }
}


// A B C
// B C D 
// C D E
