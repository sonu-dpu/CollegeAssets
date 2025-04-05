#include<iostream>
using namespace std;
int main(){
    int n, sum=0,turmsum=0;
    cout<<"enter a number :: ";
    cin >> n ;
    for(int i=1;i<=n;i++){
        turmsum+=i;
        sum+=turmsum;
    }
    cout<<"sum of series is ::"<<sum;
return 0;

}