//
// Created by hanes on 12/1/2024.
//

#ifndef STACKS_H
#define STACKS_H

#include <iostream>;
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* topNode;
public:
    Stack(): topNode(nullptr){}

    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = topNode;
        topNode = newNode;
    }

    void pop() {
        if(isEmpty()) {
            cout << "el Stack esta vacio: " << endl;
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
    }

    int top() {
        if(isEmpty()) {
            cout << "El stack esta vacio ";
            return -1;
        }
        return topNode -> data;
    }

    bool isEmpty() {
        return topNode == nullptr;
    }
};

#endif //STACKS_H
