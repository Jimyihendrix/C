#include <stdio.h>

int main(){
    printf("Operadores relacionales \n");

    float valA, valB;
    valA = 5;
    valB = 10;

    if(valA < valB){
        printf("Pregunta 1: VERDADERO \n");
    }else{
        printf("Pregunta 1: FALSO \n");
    }

    if(valA <= valB){
        printf("Pregunta 2: VERDADERO \n");
    }else{
        printf("Pregunta 2: FALSO \n");
    }

    if(valA > valB){
        printf("Pregunta 3: VERDADERO \n");
    }else{
        printf("Pregunta 3: FALSO \n");
    }

    if(valA >= valB){
        printf("Pregunta 4: VERDADERO \n");
    }else{
        printf("Pregunta 4: FALSO \n");
    }

    if(valA == valB){
        printf("Pregunta 5: VERDADERO \n");
    }else{
        printf("Pregunta 5: FALSO \n");
    }

    if(valA != valB){
        printf("Pregunta 6: VERDADERO \n");
    }else{
        printf("Pregunta 6: FALSO \n");
    }


    return 0;
}