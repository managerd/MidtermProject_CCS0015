#include "staticArray.h"
#include <iostream>
#include <iomanip>
using namespace std;

staticArray::staticArray() {
  
    size = 0;
}

staticArray::~staticArray() {
    delete[] arr;
}



void staticArray::insert(int value) {
    // Insert a value into the array
    // You can implement the insertion logic according to the chosen array type
    if (isFull()) {
        cout << setw(54) << "Array is full!\n";
    }
    if (arr == nullptr) {
        cout << setw(54) << "Array not initialized!\n";
        return;
    }

    // Insert the value at the first available index
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            arr[i] = value;
            cout <<setw(58)<< "Inserted: " << arr[i] << "." <<endl;
            return;
        }
    }
    size++;
}

void staticArray::display() {
    // Display the contents of the array
    // You can implement the display logic according to the chosen array type
    if (arr == nullptr) {
        cout << setw(54) << "Array not initialized!\n";
        return;
    }

    cout << setw(54) << "Array contents: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool staticArray::isFull() {
    // Check if the array is full
    return size == MAX_SIZE;
}