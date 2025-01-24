#include <iostream>
#include "DLList.h"


int main(void){
    std::cout<<"Hola mundo ";
    DLList<int> a;
    a.addLeft(1);
    a.addLeft(2);
    a.addLeft(3);
    a.addLeft(4);
    a.addRight(1);
    a.addRight(2);
    a.addRight(3);
    a.addRight(4);
    a.printAll();
    // for (int i = 0; i < 10; i++){
    //     // a.addRight(i);
    //     // a.addLeft(i);
    //     std::cout<<i<<std::endl;
    // }
    


return 0;
}