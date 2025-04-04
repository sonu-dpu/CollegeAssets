#include <iostream>
#include <cmath>    

using namespace std;


class VolumeCalculator {
public:
    
    double Volume(double side) {
        return side * side * side;
    }

    
    double Volume(double radius, double height) {
        return M_PI * radius * radius * height;
    }
};

int main() {
    VolumeCalculator vc;
    double cubeSide = 5.0;
    cout << "Volume of Cube (side = " << cubeSide << "): " << vc.Volume(cubeSide) << endl;
    double cylinderRadius = 3.0;
    double cylinderHeight = 7.0;
    cout << "Volume of Cylinder (radius = " << cylinderRadius << ", height = " << cylinderHeight << "): " 
         << vc.Volume(cylinderRadius, cylinderHeight) << endl;
    double sphereRadius = 4.0;
    cout << "Volume of Sphere (radius = " << sphereRadius << "): " << vc.Volume(sphereRadius) << endl;
    return 0;
}



