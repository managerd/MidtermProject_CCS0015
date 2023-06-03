#ifndef DYNAMICSTACKS_H
#define DYNAMICSTACKS_H

class dynamicStacks {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* top;

public:
    dynamicStacks();
    bool isEmpty();
    void push(int value);
    void pop();
    int peek();
    void displayDyn();
};

#endif
