#include <stdio.h>

int main(){
    printf("Arreglo Bidimensional - Suma de filas\n\n");

    int arrBi[3][4] = {
        {1,1,1,1},
        {2,2,2,5},
        {5,10,10,1}
    };

    for(int x = 0; x < 3; x++){
        int suma = 0;
        for(int y = 0; y < 4; y++){
            suma += arrBi[x][y];
        }
    printf("Suma fila %i: %i \n", x+1, suma);
    }


    return 0;
}