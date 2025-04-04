#include <iostream>
using namespace std;

class Array{
    float arr[5];

public:
    Array(float values[]){
        for(int i=0; i<5; i++){
           arr[i]=values[i];
        }
    }
    void display(){
        cout<<"Array elements: ";
        for(int i=0; i<5; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
   friend Array operator++(Array &a);
   friend Array operator--(Array &a);
};


Array operator--(Array &a){
    for(int i=0; i<5; i++){
        a.arr[i]-=1;
     }
}
 Array operator++(Array &a){
    for(int i=0; i<5; i++){
        a.arr[i]+=1;
     }
}

int main(){
    float arr[] = {1,2.0,3,3.1,4.9};
    Array a(arr);
    a.display();
    ++a;
    a.display();
    --a;
    a.display();
}
