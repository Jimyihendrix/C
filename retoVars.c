#include <stdio.h>

int main(){
    int varA;
    int varB;
    int varAux;

    printf("Ingrese var A: ");
    scanf("%i", &varA);

    printf("\nIngrese var B: ");
    scanf("%i", &varB);

    printf("\nEl valor de A es %i", varA);
    printf("\nEl valor de B es %i", varB);

    //cambio de valores con variable auxiliar
    varAux = varA;
    varA = varB;
    varB = varAux;

    printf("\n Ahora el valor de A es: %i", varA);
    printf("\n Ahora el valor de B es: %i", varB);


    return 0;
}