#include <iostream>
using namespace std;

class Numbers {
    int num1, num2;

public:
    // Default constructor
    Numbers() {
        num1 = 0;
        num2 = 0;
    }

    // Parameterized constructor with default values
    Numbers(int a, int b = 10) {
        num1 = a;
        num2 = b;
    }

    // Function to display the maximum number
    void displayMax() {
        cout << "Maximum: " << (num1 > num2 ? num1 : num2) << endl;
    }
};

int main() {
    // Creating object using default constructor
    Numbers obj1;
    cout << "Object 1: ";
    obj1.displayMax();

    // Creating object using parameterized constructor
    Numbers obj2(15, 25);
    cout << "Object 2: ";
    obj2.displayMax();

    // Creating object using parameterized constructor with default value
    Numbers obj3(20);
    cout << "Object 3: ";
    obj3.displayMax();

    return 0;
}
