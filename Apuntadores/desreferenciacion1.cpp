#include "stdio.h"

/*
    La desreferenciacion es la obtencion del valor almacenado en el espacio de memoria donde apunta un
    apuntador. En C y C++ esto se hace a traves del operador '*', aplicando al apuntador que contiene la 
    direccion del valor. Notese que se trata de un operador unario. Ejemplo: 
*/


int main(){
    int x = 17, y;
    int *p;
    p = &x;
    printf("El valor de x es: %d", *p); // Imprime 17
    y = *p + 3;
    printf("El valor de y es: %d", *p); // A 'y' se le asigna 20 
    return 0;
}