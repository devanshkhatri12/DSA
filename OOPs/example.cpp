#include<iostream>
using namespace std;


class Hero2 
{
    // 
    private:                 // -> only access inside class

    // property
    int health ;

    void print() {
        cout<<health<<endl;
    }

    public:                 // -> access anywhere
    char level = 'C';


    // getter
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    // setter
    void setLevel(int l){
        level = l;
    }

    void setHealth(int h){
        health = h;
    }


};

// class
class Hero1 
{
    public:   
    int health;
    char *name;
    static int timeToComplete;        // ->  decalaration static DM


    void setHealth(int h){
        health = h;
    }

    int getHealth() {
        return health;
    }

    // Default constructor
    Hero1() {
        cout<<"Default Constructor Calling"<<endl;
        name = new char[100];

    }

    // Parameterized Constructor
    Hero1(int health)
    {
        cout<<"Parametrized constructor "<<endl;
        // cout<<"this containg -> "<<this<<endl;
    }

    // Copy Contrctor   (BY SELF)
    Hero1 (Hero1& temp)                 // -> if we don't pass (&) in this i.e we pass the copy of value than it stuck in infite loop
    {
        char *ch = new char[10];
        ch = temp.name;
        this->name = ch;

        cout<<"Copy Contructor"<<endl;
        this-> health = temp.health;
        
    }

    void setName(char name[])
    {
        this->name = name;
    }

    void print()
    {
        cout<<"Health is: "<<this->health<<endl;
        cout<<"Name is: "<<this->name<<endl;
        cout<<endl<<endl;
    }

    static int timeLeft()                  // -> static function
    {
        return timeToComplete;
    }
};

int Hero1::timeToComplete = 10;                  // -> initiallize static datamember

int main()
{
    // object creation -> static allocation
    Hero1 GeOne;
    Hero2 RaOne;

    cout<<"size of h1 object : "<<sizeof(GeOne)<<endl;
    cout<<"size of h2 object : "<<sizeof(RaOne)<<endl;

    cout<<"health is "<<GeOne.health<<endl;
    cout<<"health is "<<RaOne.level<<endl;

    // we can access private with the help of "Getter" and "Setter"
    RaOne.setHealth(30);
    cout<<"Remaining health of RaOne is: "<<RaOne.getHealth()<<endl;

    cout<<"Level of RaOne is: "<<RaOne.getLevel()<<endl;


    // object creation -> dynamically allocation
    Hero1 *Batman = new Hero1;

    (*Batman).setHealth(30);
    cout<<"Remaining health of Batman is: "<<Batman->getHealth()<<endl;


    Hero1 IronMan(10);
    IronMan.health = 50;          // ->  this will not print this and it is not passing in paaramettrized constructor

    cout<<"Address of IronMan ->"<<&IronMan<<endl;


    Hero1 Ramesh;
    char name[10] = "Devansh";

    Ramesh.setName(name);
    Ramesh.setHealth(10);

    Ramesh.print();

    Hero1 Daddy(Ramesh);            // -> copy vvalues of 1object to another , Ex of copy constructor
    Daddy.print();

    // Here understand topic shallow and deep copy
    Ramesh.name[0] = 'R';
    Ramesh.print();

    Daddy.print();


    cout<<Hero1::timeToComplete<<endl;
    cout<<Ramesh.timeToComplete<<endl;                // -> we also acess it like this (but it is bad practice)


    cout<<Hero1::timeLeft()<<endl;    //-> print static function


}