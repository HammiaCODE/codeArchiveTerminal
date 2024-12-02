//
// Created by hanes on 12/1/2024.
//

#ifndef QUEUES_H
#define QUEUES_H

class Queue {
private:
    int front;
    int rear;
    int size;
    int* queue;
public:
    Queue(int capacity);
    bool isEmpty();
    bool isFull();
    void enqueue(int value);
    void dequeue();
    int peek();
    ~Queue();
};



#endif //QUEUES_H
