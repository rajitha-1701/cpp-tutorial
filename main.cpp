#include "queues.hpp"
#include "link.hpp"

int main(){

    queues::Queues q(100);
    q.push(10);
    q.push(11);
    q.push(12);
    q.display();
    q.top();
    q.pop();
    q.display();
    
    dsa::linked_list<int> l;
    l.add_node(10);
    l.add_node(11);
    l.add_node(12);
    l.display();
    return 0;
}