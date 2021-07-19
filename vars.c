#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //incluye booleans

int main(){

    int integerA;
    float floatA;
    char letterA;

    printf("ingresa el valor entero A: ");
    scanf("%i", &integerA);

    printf("\nIngresa el valor del float A: ");
    scanf("%f", &floatA);

    printf("\nIngresa el valor del char A: ");
    scanf(" %c", &letterA);

    printf("El entero A es: %i", integerA);
    printf("El float A es: %f", floatA);
    printf("El valor del char A es: %c", letterA);

    return 0;
}