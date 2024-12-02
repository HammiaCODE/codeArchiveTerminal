//
// Created by hanes on 12/1/2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

struct Nodes {
    int data;
    Nodes* next;
};

class LinkedList {
    private:
    Nodes* head; // Private member to manage the head node
    public:

    LinkedList() : head(nullptr) {} // Constructor to initialize the list
    ~LinkedList();                  // Destructor for cleanup

    void addNode(int value);        // Add a node with a specific value
    void showList();                // Print all nodes

};

void LinkedList::addNode(int value) {
    Nodes* newNode = new Nodes();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Nodes* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LinkedList::showList() {
    Nodes* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

LinkedList::~LinkedList() {
    Nodes* temp = head;
    while (temp != nullptr) {
        Nodes* toDelete = temp;
        temp = temp->next;
        delete toDelete;
    }
}

#endif //LINKEDLIST_H
