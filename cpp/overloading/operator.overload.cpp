#include <iostream>
#include <cstring>
using namespace std;
class String{
    char *str;
    int length;

public:
    String(const char *s){
        length = strlen(s);
        str = new char[length+1];
        strcpy(str, s);
    }

    ~String(){
        delete[] str;
        // cout<<"memmory freed";
    }

    void operator!(){
        for (int i = 0; i < length; i++){
            if(isupper(str[i])){
                str[i]= tolower(str[i]);
            }else if(islower(str[i])){
                str[i]= toupper(str[i]);
            }
        }
    }
    char operator[](int i){
        if(i<0 || i>=length){
            cout<<"Array index out of bound for index "<<i<<endl;
            return ' ';
        }
        return str[i];
    }
    void dispaly(){
        cout<<str<<endl;

    }

};



int main(){
    String s1("Sonu Arun RAM");
    s1.dispaly();
    // !s1;
    // s1.dispaly();
    cout<<s1[100]<<endl;
    return 0;
}
