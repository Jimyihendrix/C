#include <stdio.h>
#include <stdlib.h>

int main(){
    float valA, valB, valC;

    valA = 50;
    valB = 100;
    valC = 150;

    printf("condicion: \n");

    if(valA == valB)
        printf("No se cumple la condicion");

    else if(valB == valC)
        printf("Tampoco se cumple esta condicion");

    else{
        printf("Ninguna condicion se cumplio\n");
        printf("Despues de esta linea el programa terminara");
    }



    return 0;
}