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
    
    /*while(i <= limSup){
        result = accumulator + store;
        accumulator = store;
        store = result;
        printf("%i, ", result);
        i++;
    }*/

    for(int i = 1; i <= limSup; i++){
        result = accumulator + store;
        accumulator = store;
        store = result;
        printf("%i, ", result);
    }

    return 0;
}