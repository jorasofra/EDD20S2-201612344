#include "LinkedLIst.h"
#include <stdio.h>
using namespace std;

LinkedList::LinkedList(){
    this->head = NULL;
    this->tail = NULL;
    this->size = 0;
}

void LinkedList::append(int carnet, string nombre){
    Node *n = new Node(carnet, nombre);
    if(head == NULL){
        head = n;
        tail = n;
    }
    else {
        tail->siguiente = n;
    }
    size++;
}

void LinkedList::deleteData(int carnet){
    if(head != NULL) {
        Node *temp = head;
        Node *previous = NULL;
        while(temp->siguiente != NULL){
            if(temp->carnet == carnet){
                if(temp == head){
                    head = temp->siguiente;
                    delete temp;
                    printf("Alumno eliminado");
                    size--;
                    return;
                } else if (temp == tail){
                    previous->siguiente = NULL;
                    tail = previous;
                } else {
                    previous->siguiente = temp->siguiente;
                    delete temp;
                    printf("Alumno eliminado");
                    size--;
                    return;
                }
            }
            previous = temp;
            temp = temp->siguiente;
        }
    } else {
        printf("No hay datos \n");
    }
}

int LinkedList::getSize(){
    return size;
}

void LinkedList::getStudent(int carnet) {
    if(head != NULL){
        Node *temp = head;
        while(temp != NULL){
            if(temp->carnet == carnet){
                cout << "Carnet: " << temp->carnet << "\n";
                cout << "Nombre: " << temp->nombre << "\n";
                return;
            }
            temp = temp->siguiente;
        }
    } else {
        printf("No hay datos \n");
    }
}

void LinkedList::print(){
    if(head != NULL){
        Node *temp = head;
        while(temp != NULL){
            cout << "Carnet: " << temp->carnet << "\n";
            cout << "Nombre: " << temp->nombre << "\n";
            
            temp = temp->siguiente;
        }
    }
}