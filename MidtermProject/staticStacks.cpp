#include "staticStacks.h"
#include <iostream>

using namespace std;

staticStacks::staticStacks() {
    top = -1;
}

bool staticStacks::isEmpty() {
    return top == -1;
}

bool staticStacks::isFull() {
    return top == MAX_SIZE - 1;
}

void staticStacks::push(int value) {
    if (isFull()) {
        cout << "Stack Overflow: Cannot push value, stack is full." << endl;
        return;
    }
    arr[++top] = value;
    cout << "Pushed " << value << " onto the stack." << endl;
}

void staticStacks::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow: Cannot pop value, stack is empty." << endl;
        return;
    }
    cout << "Popped " << arr[top--] << " from the stack." << endl;
}

int staticStacks::peek() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return -1;
    }
    return arr[top];
}

void staticStacks::displayStat() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
}
