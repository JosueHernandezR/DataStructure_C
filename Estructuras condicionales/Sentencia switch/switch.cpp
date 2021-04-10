#include "stdio.h"

int main(){
    /*
        Sintaxis
        switch(expresion){
            case expr_cte1:
                sentencia1;
                break;
            case expr_cte2:
                sentencia2;
                break;
            default:
                sentencia;
        }

    */

    int nota;
    printf("Ingrese la calificacion: ");
    scanf("%d", &nota);

    switch(nota){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Suspenso");
            break;
        case 6:
            printf("Aprobado");
            break;
        case 7:
        case 8:
            printf("Notable");
            break;
        case 9:
            printf("Sobresaliente");
            break;
        case 10:
            printf("Excelente");
            break;
        default:
            printf("Error");

    }

    return 0;
}