#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Adivina el numero entre el 1 y el 10 que estoy pensando\n");
    scanf("%i", &num);

    if(num == 5){
        printf("Lo lograste!\n");
    }else{
        printf("Casi! pero no.\n");
    }


    return 0;
}