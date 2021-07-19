#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //incluye booleans

int main(){

    int integerA;
    float floatA;
    char letterA;

    printf("ingresa el valor entero A: ");
    scanf("%i", &integerA);
    printf("El entero A es: %i", integerA);

    printf("\nIngresa el valor del float A: ");
    scanf("%f", &floatA);
    printf("\nEl float A es: %f", floatA);

    printf("\nIngresa el valor del char A: ");
    scanf("%c", &letterA);
    printf("\nEl valor del char A es: %c", letterA);


    return 0;
}