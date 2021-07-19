#include <stdio.h>

int main(){
    float F;
    float C;

    printf("ingrese Farenheit: \n");
    scanf("%f", &F);


    C = (F - 32) * 5/9;

    printf("En celsius son: %f", C);

    return 0;
}