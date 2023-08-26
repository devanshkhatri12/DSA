#include<iostream>
using namespace std;

int main()
{
    int sideA , sideB ,sideC;
    cout<<"enter sides of triangle"<<endl;
    cin>>sideA>>sideB>>sideC;

    if(sideA==sideA && sideB==sideC)
    {
        cout<<"IT is EQUILATERAL triangle"<<endl;
    }
    else if(sideA == sideB || sideB == sideC || sideC ==sideA){
        cout<<"It is an ISOSELES triangle"<<endl;
    }
    else{
        cout<<"It is an SCALAN triangle"<<endl;
    }
}
