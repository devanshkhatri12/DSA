#include<bits/stdc++.h>
using namespace std;

// creating union
union studentData {
    // we can't declare name as string datatype bcz it overlays all members in the same memory location.
    char name[100];
    char regNumber[10];
    char course[100];
};

int main()
{
    studentData s;

    strcpy(s.name , "devansh khatri");
    cout<<"name "<<s.name<<endl;

    strcpy(s.regNumber, "24MCA10169");
    cout<<"Reg. number: "<<s.regNumber<<endl;

    strcpy(s.course , "Master of Computer Application");
    cout<<"Course name: "<<s.course<<endl;

}


