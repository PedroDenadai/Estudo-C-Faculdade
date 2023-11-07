#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 99
#define MIN 10
#define SIZE 10
#define DELTA (MAX - MIN + 1) + MIN

int main(void){
    int array[SIZE];
    srand(time(NULL));
    int li,ls,meio, val;

    printf("Array: [");
    for(int i = 0; i < SIZE; i++){
        array[i] = rand() % DELTA;
        printf(" %i ", array[i]);
    }
    printf("]\n");

    int tam = SIZE - 1;
    int flag = 0;
    do{
       flag = 0;
        for(int j = 0; j < tam; j++){
            if(array[j] > array[j + 1]){
                int aux = array[j];
                array[j] = array[j + 1];
                array[j + 1]= aux;
                flag = 1;
            }
        }
        tam--;
    }while(flag);

    printf("Array: [");
    for(int i = 0; i < SIZE; i++){
        printf(" %i ", array[i]);
    }

    printf("]\n");

    printf("VALOR: ");scanf("%i", &val);
    li = 0;
    ls = SIZE -1;
    flag = -1;
    while(li <= ls){
        meio = (li + ls) / 2;
        if(array[meio] == val){
            flag = meio;
            break;
        } else if(array[meio] > val){
            ls = meio -1;
        }else{
            li = meio + 1;
        }
      
    }

    if(flag == -1){
        printf("Valor: %i Não localizado no vetor.\n", val);

    }else{
        printf("Valor localizado no vetor[%i] = %i\n", meio, array[meio]) ;
    }
    return 0;
}