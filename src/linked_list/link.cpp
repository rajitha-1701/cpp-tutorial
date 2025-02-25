#include "link.hpp"
#include "node.hpp"

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
    temp->setData(data);

    if (head == nullptr)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
    return 0;
}

template <typename T>
int dsa::linked_list<T>::display()
{
    std::shared_ptr<node<T> > temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->getData() << std::endl;
        temp = temp->next;
    }
    return 0;
}
