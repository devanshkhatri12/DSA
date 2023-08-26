#include<iostream>
using namespace std;

int main(){
    char x;
    cout<<"Enter CHARACTER"<<endl;
    cin>>x;

    int isLowercase , isUppercase ;

    isLowercase = (x=='a' || x=='e' || x=='i' || x=='o' || x=='u');

    isUppercase = (x=='A' || x=='E' || x=='I' || x=='O' || x=='U');

    if(isLowercase || isUppercase){
        cout<<x<<" is VOWEL"<<endl;
    }
    else{
        cout<<x<<" is CONSONANT"<<endl;
    }
}