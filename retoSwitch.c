#include <stdio.h>

int main(){
    printf("Estas en Alone In The Dark, elige una opcion: \n");

    int option;
    
    printf("Escribe 1 si decides andar por el sendero hasta la casa: \n");
    printf("Escribe 2 si decides ir a la isla: \n");
    printf("Escribe 3 si decides pedir ayuda por radio: \n");

    scanf("%i", &option);

    switch(option){
        case 1:
        printf("Acabas de empezar ALONE IN THE DARK");
        break;

        case 2:
        printf("Has retrasado tu muerte, pero moriras!");
        break;

        case 3:
        printf("Sólo has ganado un poco de tiempo, pero vas a ir inevitablemente a la");
        break;

        default:
        printf("Tienes que elegir una opcion valida");
        break;
    }
    
    
    return 0;
}