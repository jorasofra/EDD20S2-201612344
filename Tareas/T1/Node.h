#define NODE_H
#include <string>
#include <iostream>
using namespace std;

class Node{
public:
    int carnet;
    string nombre;
    Node *siguiente;
    
    Node(int carnet, string nombre);
};
