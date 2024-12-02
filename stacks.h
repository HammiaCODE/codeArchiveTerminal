//
// Created by hanes on 12/1/2024.
//

#ifndef STACKS_H
#define STACKS_H

#include <iostream>;
using namespace std;

struct NodeStack {
    int data;
    NodeStack* next;
};

class Stack {
private:
    NodeStack* topNode;
public:
    Stack(): topNode(nullptr){}

    void push(int value) {
        NodeStack* newNode = new NodeStack();
        newNode->data = value;
        newNode->next = topNode;
        topNode = newNode;
    }

    void pop() {
        if(isEmpty()) {
            cout << "el Stack esta vacio: " << endl;
            return;
        }
        NodeStack* temp = topNode;
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
