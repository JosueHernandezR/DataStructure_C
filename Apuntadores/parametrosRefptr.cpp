/*Codigo C++ y C*/
#include "stdio.h"
#include "iostream"
using namespace std;

void sumaCmas(int a, int b, int& r){
    r = a + b;
}

void sumaC(int a, int b, int *r){
    *r = a + b;
}

int main(){
    int x;
    sumaCmas(7, 5, x);
    cout << "Suma en C++";
    cout << "7 + 5 =" << x << "\n";

    printf("Suma en C");
    sumaC(7, 5, &x);
    printf("7 + 5 = %d", x);

    return 0;
}