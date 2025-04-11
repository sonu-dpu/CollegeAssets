#include<iostream>
using namespace std;
class Number{
    int num1 , num2;
    public:
        Number(){
             num1=0;
             num2=0;
        }
        Number(int a, int b){
            num1=a;
            num2=b;
        }
        void displaymax(){
            cout<<"maximum number :: " << ((num1>num2) ? num1:num2) << "\n" ;
        }

};
int main(){
    Number obj1;
    Number obj2(11,2);
    obj1.displaymax();
    obj2.displaymax();
}

