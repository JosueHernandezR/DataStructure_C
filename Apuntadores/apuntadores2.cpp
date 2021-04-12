#include "stdio.h"

/*
    Verificacion de tipos de apuntadores
    int x, *p1;
    float *p2;
    p1 = &x;    // Esto es valido
    p2 = &x:    // Esto no es valido (el compilador genera un error) 


    Apuntadores constantes

    int x = 5, y = 7;
    int *const p = &x;  // Declaracion e inicializacion del apuntador constante
    *p = 3;             // Esto es valido
    p = &y;             // Esto no es valido (el compilador genera un error)

    Apuntadores a constantes

    int x = 5, y = 7;
    const int *p = &x;  // Declaracion e inicializacion del apuntador a constante
    p = &y;             // Esto es valido
    *p = 3;             // Esto no es valido (el compilador genera un error)
    y = 3;              // Esto es valido

    Apuntadores, arreglos y aritmetica de apuntadores

    int lista_arr[5] = {10, 20, 30, 40, 50}
    int *lista_ptr;
    lista_ptr = lista_arr;      // A partir de aqui ambas variables apuntan al mismo sitio
    printf("%d", lista_arr[0]); // Imprime 10
    printf("%d", lista_ptr[0]); // Instruccion equivalente a la anterior
    printf("%d", *lista_arr);   // Instruccion equivalente a la anterior
    printf("%d", *lista_ptr);   // Instruccion equivalente a la anterior
    printf("%d", lista_arr[3]); // Imprime 40
    printf("%d", lista_ptr[3]); // Instruccion equivalente a la anterior


    Apuntadores, arreglos y aritmetica de apuntadores

    int lista[5] = {10. 20, 30, 40, 50}
    int *p;
    char cad[15];
    char *q;
    p = &lista[3];
    p = lista + 3;
    printf("%d\n", lista[2]);
    printf("%d\n", *(lista + 2));
    // Las siguientes instrucciones imprimen la palabra "Programando"
    // *** Nota: Recuerdese que una constante de cadena de caracteres es 
    // una secuencia de caracteres en memoria seguidos del caracter nulo *** 

    strcpy(cad, "Programando");
    for( q = cad; *q != '\0'; q++)
        printf("%s \n", q);

*/