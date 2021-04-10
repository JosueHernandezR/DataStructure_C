#include "stdio.h"

int main(){
    int x;
    printf("Dame un numero: ");
    scanf("%d", &x);

    if(x > 0){
        printf("El numero %d es positivo", x);
    }
    return 0;
}