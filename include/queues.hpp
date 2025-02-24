#pragma once
#include <iostream>

namespace queues
{
    class Queues
    {
    private:
        // Queue pointer
        int * queue;
    public:
        Queues(int size);
        ~Queues();
    };
    
} // namespace queues
