#include "dynamicstacks.h"
#include <iostream>

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
    cout << "Pushed " << value << " onto the stack." << endl;
}

void dynamicStacks::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow: Cannot pop value, stack is empty." << endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    int value = temp->data;
    delete temp;
    cout << "Popped " << value << " from the stack." << endl;
}

int dynamicStacks::peek() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return -1;
    }
    return top->data;
}

void dynamicStacks::displayDyn() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements: ";
    Node* current = top;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
