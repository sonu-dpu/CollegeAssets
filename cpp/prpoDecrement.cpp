#include <iostream>
using namespace std;

class Employee {
    int salary;

public:
    // Constructor to initialize salary
    Employee(int s) {
        salary = s;
    }

    // Function to display salary
    void display() {
        cout << "Salary: " << salary << endl;
    }

    // Overloading Pre-Decrement (--salary)
    void operator--() {
        --salary;
    }

    // Overloading Post-Decrement (salary--)
    void operator--(int) {
        salary--;
    }
};

int main() {
    int sal;
    cout << "Enter employee salary: ";
    cin >> sal;

    Employee emp(sal);

    cout << "\nOriginal ";
    emp.display();

    --emp; // Pre-decrement
    cout << "After Pre-Decrement ";
    emp.display();

    emp--; // Post-decrement
    cout << "After Post-Decrement ";
    emp.display();

    return 0;
}
