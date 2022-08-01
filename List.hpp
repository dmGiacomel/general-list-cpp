#ifndef LIST_H
#define LIST_H
#include "Node.hpp"
#include <iostream>

template <typename datatype> 
class List{

private: 
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

    datatype removeFirst();

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
        first = first->getNext();
        delete(first);
        aux = first;
    }
}

template <typename datatype>
unsigned long long int List<datatype>::getSize(){
    return size;
}

template <typename datatype>
void List<datatype>::insertFirst(datatype data){

    Node<datatype> *aux;
    aux = new Node<datatype>(data);

    aux->setNext(first);
    first = aux;
    if(last == nullptr){
        last = aux;
    }

    size++;
}

template <typename datatype>
void List<datatype>::append(datatype data){
   
    Node<datatype> *aux; 
    aux = new Node<datatype>(data);
    aux->setNext(nullptr);

    if(size > 0){
        last->setNext(aux);
        last = aux;
    }else{
        last = aux;
        first = aux;
    }
    //std::cout << "CHEGUE AQUI\n";
    
    size++;
}

template <typename datatype>
datatype List<datatype>::removeFirst(){

    datatype data{0};
    Node<datatype> *aux;

    if(first != nullptr){
        data = first->getData();
        aux = first;
        first = first->getNext();
        delete(aux);
        size--;

        if(first == nullptr){
            last = nullptr;
        }
    }else{
        std::cout << "Empty List! Returning default <datatype> 0 value...\n";
    }

    return data;
}

#endif