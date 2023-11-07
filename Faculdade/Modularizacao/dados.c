#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

    int dados[6] = {0};
    float medias[6] = {0.0};
    int flag = 0;
    int tam;
    srand(time(NULL));

    for(int i = 0; i < 46656; i++){
        for(int j = 0; j < 6; j++){
            dados[j] = rand() % 6 + 1;
        }
        tam = 5;
        int flag = 0;
        do{
        flag = 0;
            for(int j = 0; j < tam; j++){
                if(dados[j] > dados[j + 1]){
                    int aux = dados[j];
                    dados[j] = dados[j + 1];
                    dados[j + 1]= aux;
                    flag = 1;
                }
            }
            tam--;
        }while(flag);
        for(int i = 0; i < 6; i++){
            printf("%i ", dados[i]);
            medias[i] += (float) dados[i]/46656;
        }
        printf("\n");
    }

    for(int i=0;i<6;i++){
        printf("Media de %i: %.5f\n",i + 1 , medias[i]);
    }


    printf("media[1] + media[6] = %.5f\n", medias[0] + medias[5]);
    printf("media[2] + media[5] = %.5f\n", medias[1] + medias[4]);
    printf("media[3] + media[4] = %.5f\n", medias[2] + medias[3]);

    return 0;
}