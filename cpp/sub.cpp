#include <iostream>
using namespace std;

class ClassB;  // Forward declaration

class ClassA {
    int numA;

public:
    ClassA(int a) { numA = a; }  // Parameterized constructor

    // Declare friend function
    friend void subtract(ClassA, ClassB);
};

class ClassB {
    int numB;

public:
    ClassB(int b) { numB = b; }  // Parameterized constructor

    // Declare friend function
    friend void subtract(ClassA, ClassB);
};

// Friend function to subtract numbers from two classes
void subtract(ClassA objA, ClassB objB) {
    cout << "Subtraction Result: " << (objA.numA - objB.numB) << endl;
}

int main() {
    int x, y;

    // Taking input for both classes
    cout << "Enter number for ClassA: ";
    cin >> x;
    cout << "Enter number for ClassB: ";
    cin >> y;

    // Creating objects
    ClassA objA(x);
    ClassB objB(y);

    // Calling friend function
    subtract(objA, objB);

    return 0;
}
