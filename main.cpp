#include <iostream>
//#include "List.hpp"
#include "Queue.hpp"
int main(){

    // List<int> *lista;
    // lista = new List<int>();

    // lista->append(1);
    // lista->append(2);

    // std::cout << lista->removeFirst() << std::endl;
    // std::cout << lista->removeFirst() << std::endl;
    // std::cout << lista->removeFirst() << std::endl;

    Queue<int> *queue;
    queue = new Queue<int>();

    queue->enQueue(2);
    queue->enQueue(1);
    std::cout << queue->deQueue() << std::endl;
    std::cout << queue->deQueue() << std::endl;
    queue->enQueue(42);
    std::cout << queue->deQueue() << std::endl;

    return 0; 
}