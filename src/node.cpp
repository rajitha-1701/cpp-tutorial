#include "node.hpp"

template <typename T>
dsa::node<T>::node(){
    next = nullptr;
}

template <typename T>
std::shared_ptr<dsa::node<T> > dsa::node<T>::getPointer()
{
    return next;
}

template <typename T>
void dsa::node<T>::setPointer(std::shared_ptr<node<T> > incoming_pointer)
{
    next = incoming_pointer;
}

template <typename T>
T dsa::node<T>::getData()
{
    return data;
}

template <typename T>
void dsa::node<T>::setData(T incoming_data)
{
    data = incoming_data;
}