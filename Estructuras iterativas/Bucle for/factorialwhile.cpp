#include "stdio.h"

int main(){

    long int i, n, factorial;

    printf("Intoduzca un numero: ");
    scanf("%ld", &n);

    factorial = 1;
    i = 1;

    while (i <= n){
        factorial *= i;
        i++;
    }

    printf("El numero factorial de (%ld) es: %ld", n, factorial);
    return 0;
}