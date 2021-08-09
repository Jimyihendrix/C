#include <stdio.h>

int main(){
    printf("Arreglos Unidimensionales \n");

    int integerList[3];
    integerList[0] = 4;
    integerList[1] = 5;
    integerList[2] = 6;

    float floatList[] = {24.5, 55.2, 21.21, 3.13, 2.53}; //Largo sin especificar porque ya tiene {}

    char charList[4];
    charList[0] = 'D';
    charList[1] = 'a';
    charList[2] = 'n';
    charList[3] = 'i';
    
    printf("\n Primer entero: \t\t %i", integerList[0]);
    printf("\n Primer flotante: \t\t %f", floatList[4]);
    printf("\n Primer caracter: \t\t %c%c%c%c. \n", charList[0], charList[1], charList[2], charList[3]);







    return 0;
}