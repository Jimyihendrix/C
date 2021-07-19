#include <stdio.h>

int main(){
    int x;
    printf("Ingrese el valor: %i\n", x);
    scanf("%i", &x);

    x%=x;
    ++x;
    printf("x: %i", x);



    return 0;
}