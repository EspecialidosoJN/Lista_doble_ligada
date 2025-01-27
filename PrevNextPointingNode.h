#include <iostream>
template <typename T> class PrevNextPointingNode {
public:
    T value;
    PrevNextPointingNode<T>* next=nullptr;
    PrevNextPointingNode<T>* prev=nullptr;
    PrevNextPointingNode(T value);
    ~PrevNextPointingNode();
};

template <typename T> PrevNextPointingNode<T>::PrevNextPointingNode(T value){
    this->value = value;
}

template <typename T> PrevNextPointingNode<T>::~PrevNextPointingNode(){
    std::cout<<"Se deletio nodo "<<value<<std::endl;
}