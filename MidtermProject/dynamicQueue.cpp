#include "dynamicQueue.h"
#include <iostream>
#include <iomanip>

using namespace std;

dynamicQueue::dynamicQueue() {
    front = NULL;
    rear = NULL;
    count = 0;
}

dynamicQueue::~dynamicQueue() {
    Node* current = front;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

bool dynamicQueue::isEmpty() const {
    return front == NULL;
}

bool dynamicQueue::isFull() const {
    return count == LIMIT;
}

void dynamicQueue::enqueue(int value) {
    if (isFull()) {
        cout << setw(54) << "QUEUE IS FULL" << endl;
        return;
    }

    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty()) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
    cout <<setw(56)<< "Queued: " << newNode->data << "." << endl;
    count++;
}

void dynamicQueue::dequeue() {
    if (isEmpty()) {
        cout << setw(54) << "QUEUE IS EMPTY" << endl;
        return;
    }

    int value = front->data;
    Node* temp = front;

    if (front == rear) {
        front = rear = NULL;
    }
    else {
        front = front->next;
    }

    delete temp;
    count--;
}

void dynamicQueue::display() const {
    if (isEmpty()) {
        cout << setw(54) << "QUEUE IS EMPTY" << endl;
        return;
    }

    cout << setw(62) << "QUEUE ELEMENTS: " <<endl;
    cout << setw(45);
    Node* current = front;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
