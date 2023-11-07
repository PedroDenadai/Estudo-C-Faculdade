#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MIN 0
#define MAX 99
#define DELTA (MAX - MIN + 1) + MIN
#define SIZE 15

int main(void){
    int array[SIZE], valor, index;
    srand(time(NULL));


    for(int i = 0; i < SIZE; i++){
        array[i] = rand() % DELTA;
    }
     printf("\n[");
    for(int i = 0; i < SIZE; i++){
        printf(" %i", array[i]);
    }
    printf("]\n\n");

    printf("\n\nValor a ser encontrada: ");
    scanf("%i", &valor);


    //Metodo de pesquisa
    index = -1; // valor nao encontrado no vetor
    int i = 0;
    while( i < SIZE && index == -1){
        if(array[i] == valor){
            printf("\nVALOR ENCONTRADO\n");
            printf("Na posicao %i\n\n", i);
            index = i;
        }else{
            i++;
        }
        
    }
    if(index == -1){
        printf("NAO ENCONTRADO\n");
    }
    

   



}