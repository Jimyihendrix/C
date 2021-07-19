#include <stdio.h>

int main(){
    float PI = 3.1416;
    float RADIO;
    float H;
    float result;

    printf("ingrese el radio en cm: ");
    scanf("%f", &RADIO);

    printf("ingrese la altura en cm: ");
    scanf("%f", &H);

    result = PI*RADIO*H;

    printf("El volumen de tu cilindro: %f cm cubicos", result);

    

    return 0;
}