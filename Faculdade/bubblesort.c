#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MIN 0
#define MAX 99
#define DELTA (MAX - MIN + 1) + MIN
#define SIZE 80

int main(void){
    int array[SIZE], tam;
    srand(time(NULL));


    for(int i = 0; i < SIZE - 1; i++){
        array[i] = rand() % DELTA;
    }
     printf("\n[");
    for(int i = 0; i < SIZE; i++){
        printf("%i ", array[i]);
    }
    printf("]\n\n");
    tam = SIZE - 1;
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

    printf("[");
    for(int i = 0; i < SIZE; i++){
        printf("%i ", array[i]);
    }
    printf("]\n\n");

}