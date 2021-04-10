#include "stdio.h"

int main(){

    /*
        Sintaxis
        condicion ? expresion1: expresion2;
        
        Esto equivale a
        if(condicion){
            expresion1;
        } else{
            expresion2;
        }

        Recuerda que solo se evalua una de las 
        sentencias por lo que deberemos ser
        cuidadosos con los efectos colaterales.

        Retomemos el ejemplo de la clausula else
    */
    int x;
    printf("Dame un numero: ");
    scanf("%d", &x);

    x >= 0 ? printf("El numero %d es positivo.", x): printf("El numero %d es negativo.", x);

    return 0;
}