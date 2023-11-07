#include <stdio.h>
#include <math.h>

float distancia(float px, float py, float qx, float qy);

float distancia(float px, float py, float qx, float qy){
    float d;
    d = sqrt(pow(qx - px, 2) + pow(qy - py, 2));
    return d;
}

int main(void){
    int opcao;
    float Px, Py, Qx, Qy, D;

    do{
        printf("Menu\n");
        printf("1: Calcular Distancia\n");
        printf("0: Sair\n");
        printf("Sua Opcao: "); scanf("%i", &opcao);
        if(opcao == 0){
            printf("Voce saiu\n");
        }else if(opcao == 1){
            printf("Coordenadas dos pontos P e Q\n");
            printf("Ponto P - Coordenada X: "); scanf("%f", &Px);
            printf("Ponto P - Coordenada Y: "); scanf("%f", &Py);
            printf("Ponto Q - Coordenada X: "); scanf("%f", &Qx);
            printf("Ponto Q - Coordenada Y: "); scanf("%f", &Qy);
            D = distancia(Px, Py, Qx, Qy);
            printf("Distancia entre os dois pontos P e Q é: %.2f\n", D);
        }
    }while(opcao);

    return 0;
}