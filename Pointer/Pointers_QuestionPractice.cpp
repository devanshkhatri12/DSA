#include<iostream>
using namespace std;

void update(int *p)
{
    *p = (*p) * 2;
}

int main()
{
/*
    // Q.1
    int first  = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout<<first<<" "<<second<<endl;
*/

/*
    // Q.2
    int first= 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout<<first<<endl;
*/

/*
    // Q.3
    int first= 8;
    int *p = &first;
    cout<<(*p)++<<" ";
    cout<<first<<endl;
*/

/*
    // Q.4
    int *p =0;
    int first = 110;
    *p = first;      //-> Segemtation fault
    cout<<*p<<endl;
*/

/*
    // Q.5
    int first =8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third +2;
    cout<<first<< " "<<second<<endl;
*/

/*
    // Q.6
    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout<< *ptr <<" "<<f<<" "<<p<<endl;
*/

/*
    // Q.7
    int arr[5];
    int *ptr;
    cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;
*/

/*
    // Q.8
    int arr[] = {11, 21, 13, 14};
    cout<<*(arr)<<" "<<*(arr+1)<<endl;
*/

/*
    // Q.9
    int arr[6] = {11, 21 , 13};
    cout<<(arr+1)<<endl;
*/

/*
    // Q.10
    int arr[3] = {11, 21, 13};
    int *p= arr;
    cout<<p[2]<<endl;
*/

/*
    // Q.11
    int arr[5] = {11, 12, 13, 14 ,15};
    int *p = arr++;         // -> error bcz we try to change in Symbol table
    cout<<*p<<endl;
*/

/*
    // Q.12
    char ch = 'a';
    char *p = &ch;
    ch++;
    cout<< *p <<endl;
*/

/*
    // Q.13
    char arr[] = "abcde";
    char *p = &arr[0];
    cout<< p<<endl;
*/

/*
    // Q.14
    char arr[] = "abcede";
    char *p = &arr[0];
    p++;
    cout<< p <<endl;
*/

/*
    // Q.15
    int i= 10;
    update(&i);
    cout<< i<<endl;
*/

/*
    // Q.16
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second  = (**q)++ + 9;
    cout<< first << " " << second << endl;
*/

/*
    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout<< first << " " << second << endl;
*/
}
