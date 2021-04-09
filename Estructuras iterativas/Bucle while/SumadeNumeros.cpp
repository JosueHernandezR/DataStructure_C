#include "stdio.h"

int main(){

    int total, i;   // Numero de datos y contador
    double suma, n;  // Suma de los datos y numero leido desde el teclado
    
    printf("Numero total de datos: \n");
    scanf("%d", &total);

    suma = 0;   //Inicializacion de la suma
    i = 0;      //Inicializacion del contador

    while(i <total){
        printf("Dato %d: ", i);
        scanf("%lf", &n);

        suma = suma + n;
        i++;
    }

    printf("Suma total = %lf", suma);
    return 0;
}