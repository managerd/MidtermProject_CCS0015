#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList() {
    head = NULL;
}

void LinkedList::insertPos(int value, int position) {
    Node* temp = head;

    for (int i = 1; i < position; i++) {
        if (temp == NULL) {
            return;
        }
        temp = temp->next;
    }

    Node* newNode = new Node;
    newNode->data = value;

    if (temp == NULL) {
        newNode->next = NULL;
        Node* end = head;

        while (end->next != NULL) {
            end = end->next;
        }

        end->next = newNode;
    }

    else {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void LinkedList::insertBeg(int value) {
    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void LinkedList::insertEnd(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    }

    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LinkedList::deleteVal(int position) {
    Node* tempFirst = head;

    if (position == 1) {
        head = tempFirst->next;
        delete tempFirst;
        return;
    }

    for (int i = 1; i < position - 1; i++) {
        tempFirst = tempFirst->next;
    }

    Node* tempSec = tempFirst->next;
    tempFirst->next = tempSec->next;
    delete tempSec;
}

bool LinkedList::findVal(int value) {
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == value) {
            return (true);
        }
        temp = temp->next;
    }

    return (false);
}

int LinkedList::getSize() {
    int x = 0;
    Node* temp = head;

    while (temp != NULL) {
        x++;
        temp = temp->next;
    }

    return (x);
}

bool LinkedList::isEmpty() {
    return (head == NULL);
}

void LinkedList::listDisplay() {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

