#ifndef NODE_HPP
#define NODE_HPP

#include <memory>

namespace dsa
{
    template <typename T>
    class node
    {
    private:
        T data;
        std::shared_ptr<node<T>> next;
    
    public:
        node() : next(nullptr) {}  // Constructor definition

        std::shared_ptr<node<T>> getPointer() { return next; }  // Method definition
        void setPointer(std::shared_ptr<node<T>> incoming_pointer) { next = incoming_pointer; }  // Method definition

        T getData() { return data; }  // Method definition
        void setData(T incoming_data) { data = incoming_data; }  // Method definition
    };

}  // namespace dsa

#endif
