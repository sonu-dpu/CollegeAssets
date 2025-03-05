#include<iostream>
using namespace std;
class Sample{
    int data;
public:
    // default
    Sample(){
        cout<<"Called default"<<endl;
        data=0;
    }
    //parametrized
    Sample(int x){
        cout<<"Called parametrized"<<endl;
        data = x;
    }
   //copy constructor
    Sample(Sample& s){
        cout<<"Called copy "<<endl;

        data = s.data;
    }
    ~Sample(){
        cout<<"memory deallocated"<<endl;
    }
    void display(){
        cout<<"data : "<<data<<endl;
    }
};

int main(){
    Sample s1;
    s1.display();
    Sample s2(10);
    s2.display();
    Sample s3(s2);
    s3.display();
    return 0;
}