//13. Exibir na tela a soma dos termos menores que a média dos termos.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 100
#define min 10
#define max 99
#define delta (max - min + 1) + min




int main(void){    
    int array[size], flag;
    srand(time(NULL));

    for(int i = 0; i < size; i++){
        array[i] = rand() % delta;
    }

    int soma = 0;

    for(int i = 0; i < size; i++){
        soma += array[i];
    }

    float media = soma / size;


    printf("A media é: %f\n\n", media);

    int soma_menor_media = 0;
    for(int j = 0; j < size; j++){
        if(array[j] < media){
            soma_menor_media += array[j];
        }
    }

    printf("A soma dos numeros menores que a média é %i\n", soma_menor_media);



    return 0;
}