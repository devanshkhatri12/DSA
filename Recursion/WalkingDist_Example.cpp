#include<iostream>
using namespace std;

void Home(int src , int dest)
{
    cout<<"source "<<src<<" Destination "<<dest<<endl;

    // base case
    if(src == dest)
    {
        cout<<"Ghar phuch Gya"<<endl;
        return;
    }

    // processsing
    src = src + 1;

    // recursive relation
    Home(src , dest);
}

int main()
{
    int dest =10;
    int src = 1;

    Home(src,dest);
}