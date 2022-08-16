#include <iostream>
#include "List.hpp"
int main(){

    List<int> *lista;
    lista = new List<int>();

    lista->insertFirst(1);

    lista->printList();
    lista->insertFirst(2);
    lista->append(3);
    lista->append(4);

    lista->removeFirst();
    lista->removeFirst();
    
    lista->insertFirst(10);

    std::cout << lista->getSize();

    lista->printList();
    return 0; 
}