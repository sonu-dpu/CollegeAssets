#include<iostream>
using namespace std;
class Parent{
protected:
    int data;
public:
    void display(){
        cout<<"data = "<<data<<endl;
    }
};

class Child : public Parent{
public:
    Child(){
        data = 10;
    }
    void display(){
        cout<<"Hello from child"<<endl;
    }
};
class GrandChild: public Child{
    public:
        GrandChild(){
            data = 10;
        }
        void display(){
            cout<<"Hello from child"<<endl;
        }
    };

int main(){
    Parent p1;
    Child c1;
    c1.display();
    return 0;
}