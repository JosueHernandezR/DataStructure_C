#include "stdio.h"

/* 
    Sintaxis
    
    Se puede escribir el while con una sola linea de codigo
    while(condicion) sentencia;
    
    Pero cuando va a ejecutar un bloque de instrucciones 
    se recomienda usar llaves
    while(condicion){
        bloque de codigo;
        ....;
        ....;
        ....;
    }

*/

//Ejemplo de multiplicar un número del 0 al 10
int main(){
    int n, i;
    printf("Introduzca un numero: ");
    scanf("%d",&n);
    //Aqui inicializamos el contador
    i=0;

    while(i <= 10){
        printf ("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    return 0;
}