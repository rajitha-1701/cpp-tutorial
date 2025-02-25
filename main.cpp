#include "queues.hpp"
#include "node.hpp"
#include "link.hpp"


using namespace dsa;
int main(){

    queues::Queues q(100);
    q.push(10);
    q.push(11);
    q.push(12);
    q.display();
    q.top();
    q.pop();
    q.display();
    
    linked_list<int> l;
    l.add_node(10);
    l.add_node(11);
    l.add_node(12);
    l.display();
    return 0;
}