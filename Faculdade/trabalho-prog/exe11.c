#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 100
#define min 10
#define max 99
#define delta (max - min + 1) + min

// 11. Exibir na tela somente os termos entre [35, 40] do vetor acrescidos de 5%.



int main(void){    
    int array[size], flag;
    srand(time(NULL));

    for(int i = 0; i < size; i++){
        array[i] = rand() % delta;
        array[i] *= 1.05;
    }

    for(int j = 0; j < size; j++){
        if(array[j] >= 35 && array[j] <= 40){
            printf("%i ", array[j]);
        }
    }

    return 0;
}