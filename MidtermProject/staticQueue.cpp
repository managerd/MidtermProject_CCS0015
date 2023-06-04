#include "staticQueue.h"
#include <iostream>
#include <iomanip>

using namespace std;

staticQueue::staticQueue()
{
    front = -1;
    rear = -1;
    count = 0;
    

}

bool staticQueue::isEmpty() const {
    return count == 0;
}

bool staticQueue::isFull() const {
    return count == LIMIT;
}

void staticQueue::enqueue(int value) {
    if (isFull()) {
        cout << "QUEUE IS FULL" << endl;
        return;
    }
    if (isEmpty()) {
        front = rear;
    }
    rear = (rear + 1) % LIMIT;
    data[rear] = value;
    cout << setw(54) << "Queued " << value << "." << endl;
    
    count++;
}

void staticQueue::dequeue() {
    if (isEmpty()) {
        cout << "QUEUE IS EMPTY" << endl;
        return;
    }

    int value = data[front];

    if (front == rear) {
        front = rear = 0;
    }
    else {
        front = (front + 1) % LIMIT;
    }
    count--;
}

void staticQueue::display() {
    if (isEmpty()) {
        cout << "QUEUE IS EMPTY." << endl;
        return;
    }

    cout <<setw(62)<< "QUEUE: " << endl;
    cout << setw(45);
    for (int i = front; i <=rear; i = (i + 1) % LIMIT) {
        cout << data[i] << " ";
    }
    cout << endl;
}
