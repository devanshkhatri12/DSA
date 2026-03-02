#include<bits/stdc++.h>
using namespace std;

class heap{

    private:
    int arr[100];
    int size;

    public:
    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size +1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){  
                swap(arr[parent], arr[index]);
            }else{
                return;
            }
        }
    }

    void print(){

        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void deleteNode(){
        if(size == 0){
            cout<<"Nothing to delete"<<endl;
            return ;
        }

        // step -1: replace Ist node from last node
        arr[1] = arr[size];

        // step -2: remove last node 
        size--;

        int i=1;
        while(i<size){

            int leftSide = 2*i;
            int rightSide= 2*i + 1;

            if(i < leftSide && arr[i] < arr[leftSide]){
                swap(arr[i], arr[leftSide]);
                i = leftSide;
            }else if(rightSide < size && arr[i] < arr[rightSide]){
                swap(arr[i] , arr[rightSide]);
                i = rightSide;
            }else{
                return;
            }
        }
    }


};

int main()
{
    heap h;
    h.insert(23);
    h.insert(25);
    h.insert(22);
    h.insert(20);
    h.insert(21);
    h.print();

    h.deleteNode();
    h.print();

    return 0;
}