#include<iostream>
using namespace std;
bool isprimenum(int num){
    if(num <2 ) return false;
    for(int i=2;i<num;i++){
        if(num%i==0) return false ;
     }
            return true;
        }
int main(){
    int n;
    cout<<"enter a number :: ";
    cin>>n;
    if (isprimenum(n)){
        cout << n << "prime number";
    }else{
        cout<<n<<"is not a prime number";
    }
    return 0;
}
