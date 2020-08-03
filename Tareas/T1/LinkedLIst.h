#define LINKEDLIST_H
#include <string>
#include <iostream>
#include "Node.h"
using namespace std;

class LinkedList{
private:
    Node *head;
    Node *tail;
    int size;
    
public:
    LinkedList();
    void append(int carnet, string nombre);
    void deleteData(int carnet);
    int getSize();
    void getStudent(int carnet);
    void print();
};
