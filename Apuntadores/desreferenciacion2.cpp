#include "stdio.h"

/*
    C++ ademas provee el operador binario '->', utilizando para obtener
    campos de un registro con un apuntador al mismo de una manera mas 
    facil y legible. Muchos compiladores de C tambien soportan este 
    operador '.'. 

    Ejemplo:
*/

struct Data
{
    char nombre[20];
    int edad;
};


int main(){
    Data d;
    Data *pd = &d;
    (*pd).edad = 23;     // Acceso al campo 'edad' utilizando el operador '.'
    pd->edad = 23;       // Acceso al campo 'edad' utilizando el operador '->'


    return 0;
}