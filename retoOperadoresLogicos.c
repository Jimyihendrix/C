#include <stdio.h>

int main(){

    printf("Si me das 2 numeros enteros, te dare el menor entre ellos!\n");

    int valA;
    printf("ingresa el primer numero: \n");
    scanf("%i", &valA);

    int valB;
    printf("ingresa el segundo numero: \n");
    scanf("%i", &valB);

    if(valA < valB){
        printf("El numero menor es: %i", valA);
    }else{
        printf("El numero mayor es: %i", valB);
    }



    return 0;
}