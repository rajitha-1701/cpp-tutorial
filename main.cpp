#include "queues.hpp"
#include "node.hpp"

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
    
    std::shared_ptr<node<int>> n(new node<int>());
    n->setData(10);
    std::cout<<n->getData()<<std::endl;
    return 0;
}