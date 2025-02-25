#ifndef LINK_HPP
#define LINK_HPP

#include <iostream>
#include <memory>
#include "node.hpp"

namespace dsa
{
    template <typename T>
    class linked_list
    {
        private:
            std::shared_ptr<node<T> > head;
            std::shared_ptr<node<T> > tail;
        public:
            linked_list();
            int add_node(T data);
            int display();
            int remove_node();
    };

} // namespace dsa

#endif