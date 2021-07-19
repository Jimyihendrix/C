#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("condicion if\n");

    float valA, valB, valC;

    valA = valB = 100;

    printf("Primera condicion\n");

    if(valA == valB)
        printf("Ambos son iguales\n");

    printf("Segunda condicion if\n");

    if(valA == valB){
        printf("Ambos son iguales\n");
        valC = valA + valB;

        printf("Ademas las suma de ambos numeros es un numero flotante: %f", valC);
    }



    return 0;
}