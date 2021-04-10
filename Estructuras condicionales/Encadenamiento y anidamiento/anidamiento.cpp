#include "stdio.h"

int main(){
    float a,b;
    printf("Coeficientes de la ecuacion ax+b=0: ");
    scanf("%f %f",&a, &b);

    if(a != 0){
        printf("La solucion es %f", -b/a);
    } else{
        if(b != 0){
            printf("La ecuacion no tiene solucion.");
        } else{
            printf("Solucion indeterminada.");
        }
    }


    // El if anidado anterior equivale a...

    if(a != 0){
        printf("La solucion es %f.",-b/a);
    }
    if((a == 0) && (b != 0)){
        printf("La ecuacion no tiene solucion.");
    }
    if((a == 0) && (b == 0)){
        printf("Solucion indeterminada.");
    }

    return 0;
}