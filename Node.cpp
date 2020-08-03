#include "Node.h"
#include <stdio.h>
using namespace std;

Node::Node(int carnet, string nombre){
    this->carnet = carnet;
    this->nombre = nombre;
    siguiente = NULL;
}