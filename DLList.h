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
        if (this->head != nullptr){
            this->head->prev = tmp;
        }else{
            this->tail = tmp;
        }
        this->head = tmp;
        this->lenght ++;
    }
    void addRight(T value){
        PrevNextPointingNode<T> *tmp = new PrevNextPointingNode<T>(value);
        tmp->prev = this->tail;
        if (this->tail != nullptr){this->tail->next = tmp;}
        else{
            this->head = tmp;
        }
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
    }

};