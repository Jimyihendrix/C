#include <stdio.h>

int main(){
    printf("Array Bidimensional - Suma de filas \n\n");

    int bidimensionalArray[3][4];

    bidimensionalArray[0][0] = 1;
    bidimensionalArray[0][1] = 1;
    bidimensionalArray[0][2] = 1;
    bidimensionalArray[0][3] = 1;

    bidimensionalArray[1][0] = 2;
    bidimensionalArray[1][1] = 2;
    bidimensionalArray[1][2] = 2;
    bidimensionalArray[1][3] = 4;

    bidimensionalArray[2][0] = 5;
    bidimensionalArray[2][1] = 10;
    bidimensionalArray[2][2] = 10;
    bidimensionalArray[2][3] = 1;

    
    int arr1 = bidimensionalArray[0][0] + bidimensionalArray[0][1] + bidimensionalArray[0][2] + bidimensionalArray[0][3];   
    
    printf("Primera fila: %i\n", arr1);


    int arr2 = bidimensionalArray[1][0] + bidimensionalArray[1][1] + bidimensionalArray[1][2] + bidimensionalArray[1][3];   
    
    printf("Segunda fila: %i\n", arr2);


    int arr3 = bidimensionalArray[2][0] + bidimensionalArray[2][1] + bidimensionalArray[2][2] + bidimensionalArray[2][3];   
    
    printf("Tercera fila: %i\n", arr3);


    return 0;
}