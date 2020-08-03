#include <stdio.h>
#include "LinkedLIst.h"
using namespace std;

int main(int argc, char **argv)
{
    int opcion = -1;
    LinkedList studentsList;
    
	while(opcion != 0){
        printf("Bienvenido, escoja una opcion:\n");
        printf("0. Finalizar \n");
        printf("1. Agregar Alumno \n");
        printf("2. Eliminar Alumno \n");
        printf("3. Buscar Alumno \n");
        cin >> opcion;
        string nombre;
        int carnet;
        switch(opcion){
            case 0:
                printf("Saliendo...\n");
                break;
                
            case 1:
                printf("Escriba el carnet del alumno: ");
                cin >> carnet;
                printf("\n Escriba el nombre del alumno: ");
                cin >> nombre;
                studentsList.append(carnet, nombre);
                break;
                
            case 2:
                printf("Escriba el carnet del alumno a eliminar: ");
                cin >> carnet;
                studentsList.deleteData(carnet);
                
            case 3:
                printf("Escriba el carnet del alumno a buscar: ");
                cin >> carnet;
                studentsList.getStudent(carnet);
                
            case 4:
                studentsList.print();
                break;
                
            default:
                printf("Opcion invalida... \n\n");
        }
        
    }
    return 0;
}
