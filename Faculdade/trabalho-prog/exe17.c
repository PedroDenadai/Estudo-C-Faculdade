//Escreva um algoritmo em C que leia a Matrícula e tempo de corrida (em minutos) de 25000 mil atletas
//que participaram das 10 Milhas Garoto.
//Armazene os dados em (2) vetores apropriados. Após isso, responda:
//17. Exiba na tela a média de tempo de todos os atletas.

#include <stdlib.h>
#include <stdio.h>

#define qtd_atletas 25000

int main(void){

    int matricula[qtd_atletas];
    float min_corridos[qtd_atletas];
    int soma_min = 0;
    float media = 0;


    for(int i = 0; i < qtd_atletas; i++){
        printf("Coloque sua matricula: ");
        scanf("%i", &matricula[i]);
        printf("Quantos minutos o participante %i correu? ", matricula[i]);
        scanf("%f", &min_corridos[i]);
        soma_min += min_corridos[i];
    }

    media = soma_min / qtd_atletas;
    printf("A media de tempo de todos os atletas foi: %2.f\n", media);




    return 0;
}