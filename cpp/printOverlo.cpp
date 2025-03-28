#include <iostream>
using namespace std;

class PrintData {
public:
    // Overloaded function to print an integer
    void print(int num) {
        cout << "Value " << num << endl;
    }

    // Overloaded function to print a string
    void print(const char* str) {
        cout << "Value \"" << str << "\"" << endl;
    }
};

int main() {
    PrintData obj;

    // Calling overloaded print function with an integer
    obj.print(10);

    // Calling overloaded print function with a string
    obj.print("hi");

    return 0;
}
