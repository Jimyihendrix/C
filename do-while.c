#include <stdio.h>

int main(){
    printf("Iterador do while \n");

    char answer = 'q';
    char value;
    
    do{
        printf("Ingresa una letra: \n");
        scanf("%c", &value);
    }while(value != answer);

    printf("Coinciden las letras %c == %c", value, value);

    return 0;
}