#ifndef LINK_HPP
#define LINK_HPP

#include <iostream>
#include <memory>
#include <node.hpp>

namespace dsa
{
    template <typename T>
    class linked_list
    {
    private:
        std::shared_ptr<node<T>> head;
        std::shared_ptr<node<T>> tail;
    
    public:
        linked_list() : head(nullptr), tail(nullptr) {}  // Constructor definition

        int add_node(T data)
        {
            std::shared_ptr<node<T>> temp = std::make_shared<node<T>>();
            temp->setData(data);
            temp->setPointer(nullptr);
            
            if (head == nullptr)
            {
                head = temp;
                tail = temp;
            }
            else
            {
                tail->setPointer(temp);
                tail = temp;
            }
            return 0;
        }

        int display()
        {
            std::shared_ptr<node<T>> temp = head;
            while (temp != nullptr)
            {
                std::cout << temp->getData() << std::endl;
                temp = temp->getPointer();
            }
            return 0;
        }
    };

} // namespace dsa

#endif
