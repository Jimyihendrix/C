#include <stdio.h>

int main(){
    int notaFinal;


    printf("Introduzca su nota final para saber sus resultados: \n");

    scanf("%i", &notaFinal);

    if(notaFinal < 60){
        printf("Ha suspendido y le toca ir a la recuperacion.");
    }
    
    if(notaFinal >= 60 && notaFinal <= 89){
        printf("Enhorabuena, aprobo!");
    }
    
    if(notaFinal >= 90){
        printf("Ha aprobado con mas de 90, tiene un excelente =D");
    }


    return 0;
}