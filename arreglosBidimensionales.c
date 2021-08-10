#include <stdio.h>

int main(){
    printf("Arreglos Bidimensionales\n");

    int bidimensionalArray[4][4];

    bidimensionalArray[0][0] = 1;
    bidimensionalArray[0][1] = 2;
    bidimensionalArray[0][2] = 3;
    bidimensionalArray[0][3] = 4;

    bidimensionalArray[1][0] = 5;
    bidimensionalArray[1][1] = 6;
    bidimensionalArray[1][2] = 7;
    bidimensionalArray[1][3] = 8;

    bidimensionalArray[2][0] = 9;
    bidimensionalArray[2][1] = 10;
    bidimensionalArray[2][2] = 11;
    bidimensionalArray[2][3] = 12;

    bidimensionalArray[3][0] = 13;
    bidimensionalArray[3][1] = 14;
    bidimensionalArray[3][2] = 15;
    bidimensionalArray[3][3] = 16;

    printf("Valor en (0,1): %i\n", bidimensionalArray[0][0]);
    printf("Valor en (0,2): %i\n", bidimensionalArray[0][1]);
    printf("Valor en (0,3): %i\n", bidimensionalArray[0][2]);
    printf("Valor en (0,4): %i\n", bidimensionalArray[0][3]);

    printf("Valor en (1,1): %i\n", bidimensionalArray[1][0]);
    printf("Valor en (1,2): %i\n", bidimensionalArray[1][1]);
    printf("Valor en (1,3): %i\n", bidimensionalArray[1][2]);
    printf("Valor en (1,4): %i\n", bidimensionalArray[1][3]);

    printf("Valor en (2,1): %i\n", bidimensionalArray[2][0]);
    printf("Valor en (2,2): %i\n", bidimensionalArray[2][1]);
    printf("Valor en (2,3): %i\n", bidimensionalArray[2][2]);
    printf("Valor en (2,4): %i\n", bidimensionalArray[2][3]);

    printf("Valor en (3,1): %i\n", bidimensionalArray[3][0]);
    printf("Valor en (3,2): %i\n", bidimensionalArray[3][1]);
    printf("Valor en (3,3): %i\n", bidimensionalArray[3][2]);
    printf("Valor en (3,4): %i\n", bidimensionalArray[3][3]);

    return 0;
}