#include<iostream>
using namespace std;
inline float areaRe(float length, float width){
    return length*width;
}
inline float areaPri(float length, float width){
    return 2 * length+ width;
}
int main(){
    float num1, num2;
    cout<<"enter two numbers :: ";
    cin>>num1>>num2;

    cout<<"area of rectangle :: "<< areaRe(num1, num2)<<endl;
    cout<<"area of primeter :: "<<areaPri(num1, num2)<<endl;
    return 0;
}