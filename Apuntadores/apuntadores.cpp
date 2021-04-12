#include "stdio.h"
/*
    Para declarar un apuntador se especifica el tipo de dato al que apunta,
    el operador '*' y el nombre del apuntador.

    Sintaxis
    <tipo de dato> *<identificador del apuntador>
    A continuación se mutesran varios ejemplos

    int *ptr1;          // Apuntador a un dato de tipo entero
    char *cad1, *cad2;  // Dos apuntadores a datos de tipo caracter
    float *ptr2;        // Apuntador a un dato de tipo punto flotante

    Se puede asignar a un apuntador direcciones de variable a traves
    del operador de referenciación ('&') o direcciones almacenadas en
    otros apuntadores. Ejemplos:
*/

int main(){

    int i = 5;
    int *p, *q;
    p = &i;         // Se le asigna a 'p' la direccion de 'i'
    q = p;          // Se le asigna a 'q' la direccion almacenada en 'p'
                    // (la misma de 'i').
    printf("%d", *p);
    return 0;
}
