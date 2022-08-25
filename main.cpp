#include <iostream>
#include "List.hpp"
int main(){

    List<int> *lista, *l;
    lista = new List<int>();
    l = new List<int>();

    lista->append(4);
    lista->append(5);
    lista->append(6);

    lista->printList();

    l->append(1);
    l->append(2);
    l->append(3);

    l->printList();

    lista->insertFirstList(l);

    lista->printList();
    return 0; 
}