#include <iostream>
using namespace std;
class Distance{
    float kilo, meter;
public:

void accept(){
    cout <<"enter a kilo number::";
    cin >>kilo;
    cout <<"enter a miter number::";
    cin >>meter;
}
void display(){
    cout<<"killowmiter"<<kilo<<endl;
    cout<<"miter"<<meter<<endl;
}

Distance operator>(Distance q){
    if(kilo>q.kilo){
        cout<<"distance one is grrater  "<<endl;
    }else{
        cout<<"distace two is gerater "<<endl;
    }
}
};
int main(){
    Distance obj1, obj2;

    obj1.accept();
    // obj.display();

    obj2.accept();

    obj1>obj2;

}