#include "Array.h"
#include <iostream>
#include <iomanip>
using namespace std;
Array::Array() {
    size = MAX_SIZES;
    count = 0;
}

Array::~Array() {
    delete[] arr;
}

void Array::addElement(int element) {
    if (count >= size) {
        cout <<setw(63)<< "Array is full. Cannot add more elements." << endl;
        return;
    }

    arr[count++] = element;
    cout << setw(48) << "Element " << element << " added successfully." << endl;
}

void Array::removeElement() {
    if (count <= 0) {
        cout << setw(63) << "Array is empty. Cannot remove elements." << endl;
        return;
    }

    int removedElement = arr[--count];
    cout << setw(48) << "Element " << removedElement << " removed successfully." << endl;
}

bool Array::isEmpty() {
    return (count == 0);
}

bool Array::isFull() {
    return (count == size);
}

void Array::displayElements() {
    if (count <= 0) {
        cout << setw(63) << "Array is empty. No elements to display." << endl;
        return;
    }

    cout << setw(63) << "Elements in the array: " << endl;
    cout << setw(43);
    for (int i = 0; i < count; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
