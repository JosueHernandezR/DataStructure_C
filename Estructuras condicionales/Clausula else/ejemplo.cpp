#include "stdio.h"

int main(){
    int x;
    printf("Dame un numero: ");
    scanf("%d", &x);

    if(x >= 0){
        printf("El numero %d es positivo.", x);
    } else{
        printf("El numero %d es negativo.", x);
    }


    //La clausula else anterior es equivalente a

    if( x >= 0){
        printf("El numero %d es positivo.", x);
    }
    if(x < 0){
        printf("El numero %d es negativo.", x);
    }

    return 0;
}