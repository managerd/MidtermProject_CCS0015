#ifndef STATICSTACKS_H
#define STATICSTACKS_H


const int MAX_SIZE = 100;
class staticStacks {
private:
    int top;
    int arr[MAX_SIZE];

public:
    staticStacks();
    bool isEmpty();
    bool isFull();
    void push(int value);
    void pop();
    int peek();
    void displayStat();
};

#endif
