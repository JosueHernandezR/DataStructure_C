#include "stdio.h"

int main(){
    int n, i, k;

    n = 0;                          // Paso 1
    for(i = 1; i <= 2; i++){        // Paso 2
        for(k = 5; k >=1; k -=2){   // Paso 3
            n = n + i + k;          // Paso 4
        }                           // Paso 5
    }                               // Paso 6

    printf("N vale %d", n);         // Paso 7
    return 0;
}