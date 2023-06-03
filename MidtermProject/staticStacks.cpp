#include "staticStacks.h"
#include <iostream>
#include <iomanip>

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
        cout << setw(51) << "Stack Overflow: Cannot push value, stack is full." << endl;
        return;
    }
    arr[++top] = value;
    cout <<setw(51)<< "Pushed " << value << " onto the stack." << endl;
}

void staticStacks::pop() {
    if (isEmpty()) {
        cout << setw(81) << "Stack Underflow: Cannot pop value, stack is empty." << endl;
        return;
    }
    cout << setw(51) << "Popped " << arr[top--] << " from the stack." << endl;
}

int staticStacks::peek() {
    if (isEmpty()) {
        cout << setw(62) << "Stack is empty." << endl;
        return -1;
    }
    return arr[top];
}

void staticStacks::displayStat() {
    if (isEmpty()) {
        cout << setw(62) << "Stack is empty." << endl;
        return;
    }
    cout << setw(62) << "Stack elements: "<<endl;
    cout << setw(45);
    for (int i = top; i >= 0; i--) {
        cout  << arr[i] << " ";
    }
    cout << endl;
}
