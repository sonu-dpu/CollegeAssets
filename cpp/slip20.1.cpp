#include <iostream>
using namespace std;

// Function to sort an integer array
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to sort a float array
void sortArray(float arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to display an integer array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to display a float array
void displayArray(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {5, 2, 9, 1, 7};
    float floatArr[] = {3.2, 1.5, 4.8, 2.9, 0.5};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);

    cout << "Original Integer Array: ";
    displayArray(intArr, intSize);

    sortArray(intArr, intSize);
    cout << "Sorted Integer Array: ";
    displayArray(intArr, intSize);

    cout << "\nOriginal Float Array: ";
    displayArray(floatArr, floatSize);

    sortArray(floatArr, floatSize);
    cout << "Sorted Float Array: ";
    displayArray(floatArr, floatSize);

    return 0;
}
