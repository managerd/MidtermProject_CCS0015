#ifndef DYNAMICQUEUE_H
#define DYNAMICQUEUE_H

struct Node {
    int data;
    Node* next;
};

class dynamicQueue {
private:
    Node* front;
    Node* rear;
    int count;
    const int LIMIT = 100;

public:
    dynamicQueue();
    ~dynamicQueue();
    bool isEmpty() const;
    bool isFull() const;
    void enqueue(int value);
    void dequeue();
    void display() const;
};

#endif
