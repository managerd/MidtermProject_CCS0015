#ifndef STATICQUEUE_H
#define STATICQUEUE_H
const int LIMIT = 100;
#include <iostream>

class staticQueue {
private:
    int data[LIMIT];
    int front;
    int rear;
    int count;

public:
    staticQueue();
    bool isEmpty() const;
    bool isFull() const;
    void enqueue(int value);
    void dequeue();
    void display();
};

#endif
