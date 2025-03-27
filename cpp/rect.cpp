#include <iostream>
#include<cstdlib>
using namespace std;
class Rectangle1;
class Rectangle2{
    int l, b;
public:
    void accept(){
        cout << "Enter length :";
        cin >> l;
        cout << "EnteR BREDTH :";
        cin >> b;
    }
    friend void compare(Rectangle1, Rectangle2);
};
class Rectangle1{
    int l, b;
public:
    void accept(){
        cout << "Enter length :";
        cin >> l;
        cout << "EnteR BREDTH :";
        cin >> b;
    }
    friend void compare(Rectangle1, Rectangle2);
};

void compare(Rectangle1 r1, Rectangle2 r2){
    int a1  = r1.l * r1.b;
    int a2  = r2.l * r2.b;
    if(a1<a2){
        cout<<"Recat2 has greater area"<<a2;
    }else if(a1==a2){
        cout<<"Recat2 == Recar2";
    }
    else{
        cout<<"Recat1 has greater area"<<a1;
    }
    cout<<endl;
}

int main(){
    system("./copy.sh");
    Rectangle1 r1;
    Rectangle2 r2;
    r1.accept();
    r2.accept();
    compare(r1, r2);
    return 0;
}
