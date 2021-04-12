#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "iostream"
using namespace std;

typedef struct{
    char nombre[20];
    int edad;
} Data;

int main(){

    Data *p_data;                                           // Declaracion de un apuntador a Data

    int i;
    p_data = (Data*) malloc(sizeof(Data));                  // Reservacion de memoria para un registro

    if(p_data != NULL){                                     // Verificacion de reservacion
        strcpy(p_data->nombre, "Rachel");                   // Inicializacion de datos
        p_data->edad = 21;                                  // en la memoria reservada
        printf("%c, %d", p_data->nombre, p_data->edad);
        delete p_data;                                      // Liberacion  de memoria
    }    

    p_data = new Data[10];                                  // Rservacion de memoria para un arreglo de 10 registros
    if(p_data != NULL){                                     // Verificacion de reservacion
        for(i = 0; i < 10; i++){                            // Lectura de datos del arreglo
            printf("Ingrese un nombre:");
            scanf("%s", p_data[i].nombre);
            printf("Ingrese una edad: ");
            scanf("%d", p_data[i].edad);
        }
        delete [] p_data;                                   // Liberacion de memoria del arreglo

    }

    return 0;
}