#include<iostream>
using namespace std;
inline float add(float a, float b){
    return a+b;
}
inline float sub(float a, float b){
    return a-b;
}
inline float mult(float a, float b){
    return a*b;
}
inline float div(float a, float b){
    return a/b;
}
int main(){
    float num1, num2;
    cout<<"enter a two number :: ";
    cin>>num1>>num2;
    cout<<"Additiona is :: "<<add(num1,num2)<<endl;
    cout<<"subtract is :: "<<sub(num1, num2)<<endl;
    cout<<"multipalctin ::"<<mult(num1, num2)<<endl;
    cout<<"divide is :: "<<div(num1, num2)<<endl;
    return 0;
}