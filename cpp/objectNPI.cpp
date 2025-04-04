#include <iostream>
using namespace std;

class Mobile {
    int Mobile_Id;
    string Mobile_Name;
    float Mobile_Price;

public:
    // Parameterized constructor to initialize values
    Mobile(int id, string name, float price) {
        Mobile_Id = id;
        Mobile_Name = name;
        Mobile_Price = price;
    }

    // Function to display mobile details
    void display() {
        cout << "Mobile ID: " << Mobile_Id << endl;
        cout << "Mobile Name: " << Mobile_Name << endl;
        cout << "Mobile Price: $" << Mobile_Price << endl;
    }
};

int main() {
    // Creating an object of Mobile class and initializing values
    Mobile m1(101, "Samsung Galaxy", 29999.99);

    // Displaying mobile details
    m1.display();

    return 0;
}
