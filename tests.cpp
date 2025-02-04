#include "DLList.h"
int testDDList(){
        std::cout<<"Hola mundo "<<(3/2)<<std::endl;
    
    DLList<int> a;
    a.addLeft(1);
    a.addLeft(2);
    a.addLeft(3);
    a.addLeft(4);
    a.addRight(1);
    a.addRight(2);
    a.addRight(3);
    std::cout<<a.getByIndex(0)<<" "<<a.getByIndex(3)<<" "<<a.getByIndex(4)<<" "<<a.getByIndex(7)<<std::endl;
    int &z = a.getInstanceByIndex(1);
    z = 99;
    int &z2 = a.getInstanceByIndex(2);
    if (z > z2){
        std::cout<<"z es mayor"<<std::endl;
    }else{
        std::cout<<"z2 es mayor "<<std::endl;
    }
    a.getAndRemove(0);
    a.getAndRemove(a.getLength()-1);
    a.printAll();
    
    struct Persona{
        int edad;
        std::string nombre;
    };
    Persona p1{19,"pedro"};
    std::cout<<p1.edad<<p1.nombre<<"\n";


return 0;
}