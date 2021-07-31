#include <stdio.h>

int main(){
    float a, b, c;

    a = 5, b = c = 10;

    if(a < b && b == c)
        printf("Se cumplieron las 2 condiciones \n");
    else
        printf("NO se cumplieron las 2 condiciones \n");

    if(a > b || b <= c)
        printf("Se cumplieron por lo menos una de las 2 condiciones \n");
    else
        printf("NO se cumplieron las 2 condiciones \n");


    return 0;
}