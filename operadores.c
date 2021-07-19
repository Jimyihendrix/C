#include <stdio.h>

int main(){

    int rSum;
    float rRes;
    float rDiv;
    float rMult;
    int rMod;

    rSum = 7+8;
    rRes = 7.5-3.1;
    rDiv = 7.0/3.0;
    rMult = 7*3;
    rMod = 7%3;

    printf("\nResultado suma: %i\n", rSum);
    printf("Resultado resta: %f\n",rRes);
    printf("Resultado division: %f\n", rDiv);
    printf("Resultado multiplicacion: %f\n", rMult);
    printf("Resultado modulo: %i\n", rMod);
    
    return 0;
}