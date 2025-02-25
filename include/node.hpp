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
        std::shared_ptr<node<T> > next;    
    public:
        node();
        std::shared_ptr<node<T> > getPointer();
        void setPointer(std::shared_ptr<node<T> > incoming_pointer);
        T getData();
        void setData(T incoming_data);
    };
    
} // namespace dsa
#endif