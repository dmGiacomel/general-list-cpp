#include <iostream>
#include "List.hpp"
int main(){

    List<int> *lista;
    lista = new List<int>();

    lista->append(1);
    lista->append(2);
    lista->append(3);

    lista->printList();

    int n = 0;
    if(lista->elementExists(n)){
        std::cout << "existe o " << n << "\n";
    }else{
         std::cout << "ñ existe o " << n << "\n";
    }
    return 0; 
}