#ifndef ARRAY_H
#define ARRAY_H
const int MAX_SIZES = 100;
class Array {
private:
    int arr[MAX_SIZES];
    int size; // Maximum size of the dynamic array
    int count; // Number of elements in the array

public:
    Array();
    ~Array();
    void addElement(int element);
    void removeElement();
    bool isEmpty();
    bool isFull();
    void displayElements();
};

#endif
