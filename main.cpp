#include "queues.hpp"

// GUI APPLICATION
int main(){

    queues::Queues q(100);
    q.push(10);
    q.push(11);
    q.push(12);
    q.display();
    q.top();
    q.pop();
    q.display();
    
    return 0;
}