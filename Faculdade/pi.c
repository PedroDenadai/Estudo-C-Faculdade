#include <stdio.h>
#include <math.h>

#define PI 3.14159;

int main(void){
    float r, area, volume;

    printf("Coloque o raio da esfera(cm): ");
    scanf("%f", &r);

    area = 4 * r * r * PI ;
    volume = 4 / 3 * 3.14159 * r * r * r;

    printf("\nA área da esfera é: %.2fcm2", area);
    printf("\n**************\nO volume da esfera é: %.2fcm3\n", volume);


}