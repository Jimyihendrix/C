#include <stdio.h>

int main(){
    printf("Multiplicar todos los elementos de un arreglo: \n");

    int val[5];

    printf("Ingresa los valores: \n");
    
    printf("Valor[1]: \n");
    scanf("%i", &val[0]);

    printf("Valor[2]: \n");
    scanf("%i", &val[1]);

    printf("Valor[3]: \n");
    scanf("%i", &val[2]);

    printf("Valor[4]: \n");
    scanf("%i", &val[3]);

    printf("Valor[5]: \n");
    scanf("%i", &val[4]);

    int valTotal;
    valTotal = val[0] * val[1] * val[2] * val[3] * val[4];
    
    printf("%i x %i x %i x %i x %i = %i", val[0], val[1], val[2], val[3], val[4], valTotal);

    return 0;
}