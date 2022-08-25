#include <iostream>
#include "List.hpp"
int main(){

    List<int> *lista;
    lista = new List<int>();

    lista->insertFirst(1);
    lista->insertFirst(2); 
    lista->insertFirst(3);

    lista->printList();
    
    lista->removeLast();
    lista->printList();
    lista->removeLast();
    lista->printList();
    lista->removeLast();
    lista->printList();
    return 0; 
}