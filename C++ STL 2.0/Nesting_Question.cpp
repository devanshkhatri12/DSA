// Question: The Monk and Class Marks 


// PROBLEM STATEMENT
// Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love with his old college!) He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100.

// The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks. And if two students have the same marks, they should be arranged in lexicographical manner.

// Help Monk prepare the same!

// INPUT FORMAT:
// On the first line of the standard input, there is an integer N, denoting the number of students. N lines follow, which contain a string and an integer, denoting the name of the student and his marks.

// OUTPUT FORMAT:
// You must print the required list.


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, multiset<string>> mp;

    int n;
    cout<<"enter input"<<endl;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int marks;
        string name;

        cin>>name>>marks;

        mp[marks].insert(name);
    }

    // printing 
    auto current_it = --mp.end();

    while(true)
    {
        auto &student_names = (*current_it).second;
        int student_marks = (*current_it).first;

        for(auto student : student_names){
            cout<<student<<" "<<student_marks<<" "<<endl;
        }
        if(current_it == mp.begin())
        {
            break;
        }
        current_it--;
    }
}




// INPUT:
// 3
// eve 10
// alice 20
// bob 10