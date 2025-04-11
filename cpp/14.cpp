#include<iostream>
using namespace std;
void swap(float &a, float &b){
    float temp =a;
    a=b;
    b=temp;
}
int main(){
    float num1, num2;
    cout<<"enter two numer ";
    cin>>num1>>num2;
    cout<<"before swapping num1 ::"<<num1<<" num2 :: "<<num2<<endl;
    swap(num1, num2);
    cout<<"after swaping num2 ::"<<num1<<" num2 ::"<<num2<<endl;
return 0;


}