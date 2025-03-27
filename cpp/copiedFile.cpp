#include<iostream>

using namespace std;

class Cylinder{
    float radius, height;
public:
    void setradius(float r){
        radius = r;
    }
    void setheight(float h){
        height = h;
    }
    float volume(){
        return (3.142 * (radius*radius)* height);
    }
};

int main(){
    Cylinder c1;
    c1.setradius(30.0);
    c1.setheight(3.2);
    cout<<"Volume of cylinder : "<<c1.volume();
    return 0;
}

