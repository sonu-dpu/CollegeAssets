#include <iostream>
using namespace std;

class AreaCalculator {
public:
    // Inline function to calculate the area of a circle
    inline float circleArea(float radius) {
        return 3.1416 * radius * radius;
    }

    // Inline function to calculate the area of a square
    inline float squareArea(float side) {
        return side * side;
    }

    // Inline function to calculate the area of a rectangle
    inline float rectangleArea(float length, float breadth) {
        return length * breadth;
    }
};

int main() {
    AreaCalculator obj;
    float radius, side, length, breadth;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << obj.circleArea(radius) << endl;

    cout << "Enter side of the square: ";
    cin >> side;
    cout << "Area of Square: " << obj.squareArea(side) << endl;

    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << obj.rectangleArea(length, breadth) << endl;

    return 0;
}
