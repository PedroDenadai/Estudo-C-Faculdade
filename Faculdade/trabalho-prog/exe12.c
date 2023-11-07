#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 100
#define min 10
#define max 99
#define delta (max - min + 1) + min

// 12. Exibir na tela os termos maiores que a média dos termos que estão nos índices: 0, 4 e 9.



int main(void){    
    int array[size], flag;
    srand(time(NULL));

    for(int i = 0; i < size; i++){
        array[i] = rand() % delta;
    }
    
    
    float media = (array[0] + array[4] + array[9]) / 3;
    
    printf("A media é: %f\n\n", media);
    for(int j = 0; j < size; j++){
        if(array[j] > media){
            printf("%i ", array[j]);
        }
    }



    return 0;
}