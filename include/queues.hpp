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
        Queues(int size);
        int push(int data);
        int pop();
        int display();
        int top();
        int isEmpty();
        int isFull();
        ~Queues();
    };
    
} // namespace queues
