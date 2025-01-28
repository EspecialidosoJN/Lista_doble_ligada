#include "PrevNextPointingNode.h"

template <typename T> class DLList{
    private:
    PrevNextPointingNode<T> *head;
    PrevNextPointingNode<T> *tail;
    unsigned int length;
    PrevNextPointingNode<T>* getNodeByIndex(unsigned int index);

    public:
    DLList();
    ~DLList();
    PrevNextPointingNode<T>* getLast();
    PrevNextPointingNode<T>* getFirst();
    unsigned int getLength();
    void addLeft(T value);
    void addRight(T value);
    void printAll();
    T getByIndex(unsigned int index);
    T& getInstanceByIndex(unsigned int index);
    T getAndRemove(unsigned int index);
};

template <typename T> PrevNextPointingNode<T>* DLList<T>::getNodeByIndex(unsigned int index)
{
    PrevNextPointingNode<T> *current;

    if (index >= this->length){
        std::cout<<"se busco un indice fuera del limite: "<<index<<" de "<<this->length-1<<std::endl;
    }
    if (index <= this->length/2){
        current = this->head;
        for (int i = 0; i<index;i++){
            current = current->next;
        }
    }else{
        current = this->tail;
        for (int i = this->length; i>index;i--){
            current = current->prev;
        }
    }

    return current;
}

template <typename T> DLList<T>::DLList(){
    head = nullptr;
    tail = nullptr;
    length = 0;
    std::cout<<"se hizo una DDList"<<std::endl;
}

template <typename T> DLList<T>::~DLList(){
    PrevNextPointingNode<T> *current = this->head;
    PrevNextPointingNode<T> *tmp;
    while (current != nullptr){
        tmp = current;
        current = current->next;
        delete tmp;
    }
    std::cout<<"se delition una DDList"<<std::endl;
}

template <typename T> PrevNextPointingNode<T>* DLList<T>::getLast(){
    return this->tail;
}

template <typename T> PrevNextPointingNode<T>* DLList<T>::getFirst(){
    return this->head;
}

template <typename T> unsigned int DLList<T>::getLength(){
    return this->length;
}

template <typename T> void DLList<T>::addLeft(T value){
    PrevNextPointingNode<T> *tmp = new PrevNextPointingNode<T>(value);
    tmp->next = this->head;

    if (this->head != nullptr){
        this->head->prev = tmp;
    }else{
        this->tail = tmp;
    }
    this->head = tmp;
    this->length ++;
}

template <typename T> void DLList<T>::addRight(T value){
    PrevNextPointingNode<T> *tmp = new PrevNextPointingNode<T>(value);
    tmp->prev = this->tail;
    if (this->tail != nullptr){this->tail->next = tmp;}
    else{
        this->head = tmp;
    }
    this->tail = tmp;
    this->length ++;
}

template <typename T> void DLList<T>::printAll(){
    PrevNextPointingNode<T> *current = this->head;
    std::cout<<"There are "<<this->length<<" nodes"<<std::endl;
    while (current != nullptr){
        std::cout<<current->value<<std::endl;
        current = current->next;
    }
}

template <typename T> T DLList<T>::getByIndex(unsigned int index){
    PrevNextPointingNode<T> *node = this->getNodeByIndex(index);
    return node->value;
}

template <typename T> T& DLList<T>::getInstanceByIndex(unsigned int index){
    PrevNextPointingNode<T> *node = this->getNodeByIndex(index);
    return node->value;
}

template <typename T> T DLList<T>::getAndRemove(unsigned int index){
    PrevNextPointingNode<T> *node = this->getNodeByIndex(index);
    T tmp = node->value;

    if(node->prev != nullptr){node->prev->next = node->next;}
    else{this->head = node->next;}
    if(node->next != nullptr){node->next->prev = node->prev;}
    else{this->tail = node->prev;}
    this->length --;
    delete node;
    return tmp;
}