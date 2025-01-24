#include "PrevNextPointingNode.h"

template <typename T> class DLList{
    private:
    PrevNextPointingNode<T> *head = nullptr;
    PrevNextPointingNode<T> *tail = nullptr;
    unsigned int lenght = 0;
    public:
    DLList(){
        std::cout<<"si se chainea el import"<<std::endl;
    }
    ~DLList(){
        std::cout<<"se delition una DDList"<<std::endl;
    }
    PrevNextPointingNode<T>* getLast(){
        return this->tail;
    }
    PrevNextPointingNode<T>* getFirst(){
        return this->head;
    }
    unsigned int getLenght(){
        return this->lenght;
    }
    void addLeft(T value){
        PrevNextPointingNode<T> *tmp = new PrevNextPointingNode<T>(value);
        tmp->next = this->head;
        //this->head->prev = tmp;
        this->head = tmp;
        this->lenght ++;
    }
    void addRight(T value){
        PrevNextPointingNode<T> *tmp = new PrevNextPointingNode<T>(value);
        tmp->prev = this->tail;
        //this->tail->next = tmp;
        this->tail = tmp;
        this->lenght ++;
    }
    void printAll(){
        PrevNextPointingNode<T> *current = this->head;
        std::cout<<"there are: "<<this->lenght<<" nodes"<<std::endl;
        while (current != nullptr){
            std::cout<<current->value<<std::endl;
            current = current->next;
        }
        PrevNextPointingNode<T> *current2 = this->tail;
        while (current2 != nullptr){
            std::cout<<current2->value<<std::endl;
            current2 = current2->prev;
        }
    }

};