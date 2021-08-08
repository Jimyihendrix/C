#include <stdio.h>

int main(){
    printf("Imprime los primeros 100 numeros \n");

    int value = 0;

    do{
        value++;
        printf("%i, ", value);
    }while(value < 100);


    return 0;
}