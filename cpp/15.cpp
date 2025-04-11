#include<iostream>
using namespace std;

inline int  minimum(int a, int b){
   return  (a < b) ? a:b;
}
inline int maximum(int a, int b){
    return (a>b) ? a:b;
}
int main(){
    int num1 , num2;
    cout<<"enter a both number ::  ";
    cin >> num1 >> num2 ;

    cout <<"minimum number are ::"<< minimum(num1, num2) << endl;
    cout << "maximum number is ::" << maximum(num1 , num2 )<< endl ;
    return 0;
}