#include "stdio.h"

/*
    Sintaxis

    Puede combinarse for y while para anidarse

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("(%d, %d)", i, j);
        }
    }

    Esto genera:
    (0,0)(0,1)(0,2) ... (0,N)
    (1,0)(1,1)(1,2) ... (1,N)
       ...   ...
    (N,0)(N,1)(N,2) ... (N,N)
*/