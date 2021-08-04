#include <stdio.h>

int main(){
    printf("Condicional Switch \n");

    int option;
    scanf("%i", &option);

    switch(option){
        case 1:
        printf("Elegiste #1\n");
        break;

        case 2:
        printf("Elegiste #2\n");
        break;
        
        case 3:
        printf("Elegiste #3\n");
        break;

        default:
        printf("Elegiste una opcion invalida\n");
        break;
    }
    
    
    return 0;
}