//
// Created by hanes on 12/1/2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    private:
    Node* head; // Private member to manage the head node
    public:

    LinkedList() : head(nullptr) {} // Constructor to initialize the list
    ~LinkedList();                  // Destructor for cleanup

    void addNode(int value);        // Add a node with a specific value
    void showList();                // Print all nodes

};

void LinkedList::addNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LinkedList::showList() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

LinkedList::~LinkedList() {
    Node* temp = head;
    while (temp != nullptr) {
        Node* toDelete = temp;
        temp = temp->next;
        delete toDelete;
    }
}

#endif //LINKEDLIST_H
