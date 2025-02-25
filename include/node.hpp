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
        inline node(){
            next = nullptr;
        }

        inline std::shared_ptr<node> & getPointer(){
            return next;
        }   
        inline void setPointer(std::shared_ptr<T> incoming_pointer){
            next = incoming_pointer;
        }
        inline T getData(){
            return data;
        }
        inline void setData(T incoming_data){
            data = incoming_data;
        }
    };
    
} // namespace dsa
#endif