#include "stdio.h"

int main(){

    long int i, n, factorial;

    do{
        printf("Introduzca un numero (entre 1 y 12): ");
        scanf("%ld", &n);
    }while((n<1) || (n>12));

    factorial =1;

    for(i=1; i <=n; i++){
        factorial *=i;
    }

    printf("Factorial (%ld) = %ld", n, factorial);
    return 0;
}