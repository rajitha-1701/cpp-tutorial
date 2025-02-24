#pragma once
#include <iostream>

namespace queues
{
    class Queues
    {
    private:
        // Queue pointer
        int * queue;
        // Front pointer
        int front;
        // Rear pointer
        int rear;
        // Size of the queue
        int size;
    public:
        // Contructor for queue
        Queues(int size);
        // Pushing the data to queue
        int push(int data);
        // Popping the top most element of queue
        int pop();
        // Display elements present in queue
        int display();
        // Checking the first element of queue
        int top();
        // Checking if the queue is empty
        int isEmpty();
        // Checking if the queue is full
        int isFull();
        ~Queues();
    };
    
} // namespace queues
