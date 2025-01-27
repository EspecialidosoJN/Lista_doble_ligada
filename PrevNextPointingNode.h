#include <iostream>
template <typename T> class PrevNextPointingNode {
public:
    T value;
    PrevNextPointingNode<T>* next;
    PrevNextPointingNode<T>* prev;
    PrevNextPointingNode(T value);
    ~PrevNextPointingNode();
};

template <typename T> PrevNextPointingNode<T>::PrevNextPointingNode(T value){
    this->next = nullptr;
    this->prev = nullptr;
    this->value = value;
    std::cout<<"se hizo un nodo "<<value<<std::endl;
}

template <typename T> PrevNextPointingNode<T>::~PrevNextPointingNode(){
    std::cout<<"Se deletio nodo "<<value<<std::endl;
}