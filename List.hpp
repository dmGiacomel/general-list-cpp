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

    datatype* getFirst();
    datatype* getLast();
    unsigned long long int getSize();

    datatype getElementByPosition(unsigned long long int position);
    bool elementExists(datatype data);
    void setFirst(datatype data);
    void setLast(datatype data);
    void append(datatype data);
    void insertFirst(datatype data);
    
};

#endif