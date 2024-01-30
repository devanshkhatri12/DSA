#include<iostream>
using namespace std;

int main()
{
    // Static Memory Allocation
    int i =5;                  //-> variable declaration
    int arr1[5];               //-> array declartion
    char ch;                  // -> charater var. declartion


    // Dynamic Allocation Memory
    int *p = new int;          //-> variable declaration
    *p = 5;
    cout<<*p<<endl;

    int *arr2 = new int[5];    //-> array declartion
    // arr2 = {1,2,3,4,5};
    cout<<*arr2<<endl;

    char *c = new char;        // -> charater var. declartion
    *c ='a';
    cout<<c<<endl;            // -> it print whole string until it get null char
    cout<<*c<<endl;


    // Deallocation memory
    delete p;                    //-> deallocation

    delete c;                   //-> deallocation

    delete [] arr2;            //-> 1D array deallocation



    // 2D array in Dynamic Mmemory
    int row;
    cout<<"enter row"<<endl;
    cin>>row;

    int col;
    cout<<"enter col"<<endl;
    cin>>col;

    // Creating
    int **ar = new int *[row];
    for(int i=0; i<row; i++)
    {
        ar[i] = new int[col];
    }

    // taking input
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>ar[i][j];
        }
    }

    // printing output
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<ar[i][j]<<" ";
        }cout<<endl;
    }

    // Deallocation
    for(int i=0; i<row; i++)
    {
        delete [] ar[i];
    }
    delete [] ar;


}
