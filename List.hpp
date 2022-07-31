#ifndef LIST_H
#define LIST_H
#include "Node.hpp"

template <typename datatype> 
class List{
    Node <datatype> *first;
    Node <datatype> *last;
    unsigned long long int size;

    public:
    List();
    ~List();
 
    datatype getFirst();
    datatype getLast();
    unsigned long long int getSize();

    datatype getElementByPosition(unsigned long long int position);
    bool elementExists(datatype data);
    void setFirst(datatype data);
    void setLast(datatype data);
    void append(datatype data);
    void insertFirst(datatype data);

};

template <typename datatype>
List<datatype>::List(){
    first = nullptr;
    last = nullptr;
    size = 0;
}

template <typename datatype>
List<datatype>::~List(){
    Node <datatype> *aux = first;

    while (aux != nullptr){
        first = first->next;
        delete(first);
        aux = first;
    }
}

template <typename datatype>
void List<datatype>::insertFirst(datatype data){

    Node<datatype> *aux;
    aux = new Node<datatype>();

    aux->setNext(first);
    first = aux;
}

template <typename datatype>
void List<datatype>::insertLast(dataype data){
    
}

#endif