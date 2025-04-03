#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream src("src.txt");  //reading 
    ofstream out("out.txt"); //writing

    if(!src){
        cout<<"Error opening src file";
        return 1;
    }
    if(!out){
        cout<<"Error opening out file";
        return 1;
    }
    string line;
    while (getline(src, line)){
        out<<line<<endl;

    }
    return 0;
}