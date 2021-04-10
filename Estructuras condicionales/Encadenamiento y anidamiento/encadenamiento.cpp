#include "stdio.h"

int main(){
    float nota;

    printf("Deme una nota: ");
    scanf("%f", &nota);

    if( nota >= 9){
        printf("Sobresaliente");
    } else if( nota >= 7){
        printf("Notable");
    } else if( nota > 5){
        printf("Aprobado");
    } else{
        printf("Suspenso");
    }

    // Equivalencia usando meramente if
    if( nota >= 9){
        printf("Sobresaliente");
    }
    if((nota >= 7) && (nota < 9)){
        printf("Notable");
    }
    if((nota >= 5) && (nota < 7)){
        printf("Aprobado");
    }
    if(nota < 5){
        printf("Suspenso");
    }

    return 0;
}