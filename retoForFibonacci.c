#include <stdio.h>

int main(){
    printf("Secuencia FIBONACCI: \n");
    
    int limSup;
    int accumulator = 0;
    int result = 0;
    int store = 1;
    int i = 1;

    printf("Introduce el limite de ciclos de FIBONACCI: \n");
    scanf("%i",&limSup);
    printf("\n");
    
    while(i <= limSup){
        result = accumulator + store;
        printf("%i, ", result);
        accumulator = store;
        store = result;
        i++;
    }

    //for(int i = 1; i <= limiteSuperior; i = acumulador){
    //    acumulador = i + i;
    //    resultado = i + acumulador;
    //    printf("%i\n", resultado);
    //}

    return 0;
}