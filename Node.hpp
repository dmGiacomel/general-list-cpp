#ifndef NODE_H
#define NODE_H

template <typename datatype> 
class Node{
    datatype data;
    Node<datatype> *next;
    Node<datatype> *prev;

public:
    Node();
    Node(datatype data);
    Node(datatype data, Node<datatype> *prev, Node<datatype> *next);
    ~Node();

    datatype getData();
    void setData(datatype data);
    Node<datatype>* getNext();
    void setNext (Node<datatype> *next);
    Node<datatype>* getPrev();
    void setPrev (Node<datatype> *prev);
};

template <typename datatype> 
Node<datatype>::Node(){
    data = (datatype)0;
    next = nullptr;
    prev = nullptr;
}

template <typename datatype> 
Node<datatype>::Node(datatype data){
    this->data = data;
    next = nullptr;
    prev = nullptr;
}

template <typename datatype> 
Node<datatype>::Node(datatype data, Node<datatype> *prev, Node<datatype> *next){
    this->data = data;
    this->next = next;
    this->prev = prev;
}

template <typename datatype>
Node<datatype>::~Node(){
    next = nullptr;
    prev = nullptr;
}

template <typename datatype>
datatype Node<datatype>::getData(){
    return data;
}

template <typename datatype>
void Node<datatype>::setData(datatype data){
    this->data = data;
}

template <typename datatype>
Node<datatype>* Node<datatype>::getNext(){
    return next;
}

template <typename datatype> 
void Node<datatype>::setNext(Node<datatype> *next){
    this->next = next;
}

template <typename datatype> 
Node<datatype>* Node<datatype>::getPrev(){
    return prev;
}

template <typename datatype> 
void Node<datatype>::setPrev(Node<datatype> *next){
    this->prev = prev;
}

#endif