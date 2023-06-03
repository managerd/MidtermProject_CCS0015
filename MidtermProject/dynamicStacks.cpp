#include "dynamicstacks.h"
#include <iostream>
#include <iomanip>

using namespace std;

dynamicStacks::dynamicStacks() {
    top = nullptr;
}

bool dynamicStacks::isEmpty() {
    return top == nullptr;
}

void dynamicStacks::push(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << setw(51) << "Pushed " << value << " onto the stack." << endl;
}

void dynamicStacks::pop() {
    if (isEmpty()) {
        cout << setw(81) << "Stack Underflow: Cannot pop value, stack is empty." << endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    int value = temp->data;
    delete temp;
    cout << setw(51) << "Popped " << value << " from the stack." << endl;
}

int dynamicStacks::peek() {
    if (isEmpty()) {
        cout << setw(62) << "Stack is empty." << endl;
        return -1;
    }
    return top->data;
}

void dynamicStacks::displayDyn() {
    if (isEmpty()) {
        cout << setw(62) << "Stack is empty." << endl;
        return;
    }
    cout << setw(62) << "Stack elements: " << endl;
    cout << setw(45);
    Node* current = top;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
