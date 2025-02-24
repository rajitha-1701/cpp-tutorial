#include "queues.hpp"

using namespace queues;

Queues::Queues(int size)
{
    queue = new int(size);
    std::cout << "Queue Initialized";
}

Queues::~Queues()
{
}
