#include <iostream>
#include <cmath>    // For M_PI

using namespace std;

// Class for Cube, Cylinder, and Sphere
class VolumeCalculator {
public:
    // Volume of Cube: V = side^3
    double Volume(double side) {
        return side * side * side;
    }

    // Volume of Cylinder: V = π * radius^2 * height
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



