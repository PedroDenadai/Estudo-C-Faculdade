#include <stdio.h>

int main(void){

    int i, soma = 0;

    for (i = 400; i >= 300; i--){
        if (i % 11 == 0){
            soma += i;
            printf("%d\n", i);

        }

    }
    printf("\nSoma dos multiplos de 11 no intervalo [300, 400]: %d\n", soma);




}