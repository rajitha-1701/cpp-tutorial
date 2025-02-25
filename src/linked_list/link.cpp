#include "link.hpp"
#include "node.hpp"

using namespace dsa;
template <typename T>
dsa::linked_list<T>::linked_list()
{
    head = nullptr;
    tail = nullptr;
}

template <typename T>
int dsa::linked_list<T>::add_node(T data)
{
    std::shared_ptr<node<T> > temp = std::make_shared<node<T> >();
    temp->node<T>::setData(data);
    temp->node<T>::setPointer(nullptr);

    if (head == nullptr)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->
        tail = temp;
    }
    return 0;
}

template <typename T>
int dsa::linked_list<T>::display()
{
    // std::shared_ptr<node<T> > temp = head;
    // while (temp != nullptr)
    // {
    //     std::cout << temp->getData() << std::endl;
    //     temp = temp->getPointer();
    // }
    // return 0;
}
