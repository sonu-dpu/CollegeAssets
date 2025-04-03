#include<iostream>
using namespace std;

class Book{
    string Book_name;
    string author;
    float price;

public:

void accept(){
    cout<<"enter book name ::";
    cin>>Book_name;
    cin>>author;
    cin>>price;
}
void display(){
    cout<<Book_name<<author<<price<<endl;
}



};


int main(){
    Book b1[5];
    for (int i = 0; i < 5; i++)
    {
        b1[i].accept();
    }
    for (int i = 0; i < 5; i++)
    {
        b1[i].display();
    }

}