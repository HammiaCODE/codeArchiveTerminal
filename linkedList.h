//
// Created by hanes on 12/1/2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace  std;

struct Node {
    int data;
    Node* next;
};


void addNode(Node* &head, int value) {
    Node* newNode = new Node();
    newNode -> data = value;
    newNode -> next = nullptr;

    if(head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while(temp->next != nullptr) {
            temp=temp->next;
        }
        temp->next = newNode;
    }
}

void showList(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << "-> ";
        temp= temp -> next;
    }
}

#endif //LINKEDLIST_H
