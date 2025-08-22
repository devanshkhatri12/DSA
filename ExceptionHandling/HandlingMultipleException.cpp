#include<bits/stdc++.h>
using namespace std;

int main()
{
    try{

        int choice;
        cout<<"enter your choice"<<endl;
        cin>>choice;

        
            if(choice == 1){
                cout<<choice<<" For Invalid Exceptiom"<<endl;
                throw invalid_argument("Invalid Exception");
            }
            else if(choice == 2){
                cout<<choice<<" For Out of Range Exception"<<endl;
                throw out_of_range("Index out of range Exception");
            }
            else if(choice == 3){
                cout<<choice<<" For Length Exception"<<endl;
                throw length_error("Length is not valid Exception");
            }else{
                throw "Unknown Error";
            }
    }
    catch(invalid_argument e)
        {
            cout<<"Exception Caught: "<<e.what()<<endl;
        }
        catch(out_of_range e){

            cout<<"Exception Caught: "<<e.what()<<endl;

        }catch(length_error e){
            cout<<"Exception Caught: "<<e.what()<<endl;
        }
        catch(...){
            cout<<"Unkown Exception Caught: "<<endl;
        }
}