#include <iostream>
using namespace std;

class Item {
    int item_code;
    string item_name;
    float item_price;
    
    static int count;  // Static variable to count objects

public:
    // Constructor to increase count when object is created
    Item() {
        count++;
    }

    // Function to take item details
    void accept() {
        cout << "Enter Item Code: ";
        cin >> item_code;
        cout << "Enter Item Name: ";
        cin >> item_name;
        cout << "Enter Item Price: ";
        cin >> item_price;
    }

    // Function to show item details
    void display() {
        cout << "\nItem Code: " << item_code;
        cout << "\nItem Name: " << item_name;
        cout << "\nItem Price: $" << item_price << endl;
    }

    // Static function to show total items created
    static void showCount() {
        cout << "\nTotal Items Created: " << count << endl;
    }
};

// Initialize static variable
int Item::count = 0;

int main() {
    Item item1, item2; // Creating two objects

    item1.accept();
    item2.accept();

    cout << "\nItem Details:";
    item1.display();
    item2.display();

    Item::showCount(); // Display total number of items

    return 0;
}
