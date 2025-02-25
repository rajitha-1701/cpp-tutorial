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
    
    linked_list<char> l;
    l.add_node('a');
    l.add_node('b');
    l.add_node('c');
    l.display();
    return 0;
}