#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Create Structure
    struct bioData {
        string name;
        int age;
        char bloodGroup[5];
    };

    // create object of a structure
    bioData person1 = {"devansh", 22, "B+"};

    // Accesing values
    cout<<"name of Person: "<<person1.name<<endl;
    cout<<"Age of Person: "<<person1.age<<endl;
    cout<<"BloodGroup of Person: "<<person1.bloodGroup<<endl;



}