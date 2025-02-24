#include "queues.hpp"

using namespace queues;

Queues::Queues(int size)
{
    queue = new int(size);
    std::cout << "Queue Initialized\n";
    this->size = size;
    front = 0;
    rear = 0;

}

int queues::Queues::push(int data)
{
    if(isFull())
        return -1;
    queue[rear++] = data;
    return 0;
}

int queues::Queues::pop()
{
    if(isEmpty())
        return -1;
    
    front++;
    return 0;
}

int queues::Queues::display()
{
    std::cout <<"Display: ";
    for(int i = front; i < rear; i++)
    {
        std::cout<<queue[i]<<"\t";
    }
    std::cout <<"\n";
    return 0;
}

int queues::Queues::top()
{
    if(isEmpty())
        return -1;
    std::cout << "Top Element: " << queue[front] << "\n";
    return queue[front];
}

int queues::Queues::isEmpty()
{
    if(front == rear)
        return 1;
    return 0;
}

int queues::Queues::isFull()
{
    if(front - rear + 1 == size)
        return 1;
    return 0;
}

Queues::~Queues()
{
}
