#include "stdio.h"

int main(){

    long int i, n, factorial;

    printf("Introduzca un numero: ");
    scanf("%ld", &n);

    factorial = 1;

    for(i = 1; i <= n; i++){
        factorial *= i;
    }

    printf("El numero factorial de (%ld) es: %ld", n, factorial);
    return 0;
}