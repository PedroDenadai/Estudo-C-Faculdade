//Escreva um algoritmo em C que leia a Matrícula e tempo de corrida (em minutos) de 25000 mil atletas
//que participaram das 10 Milhas Garoto.
//Armazene os dados em (2) vetores apropriados. Após isso, responda:

//19. Exiba a matrícula do atleta que venceu a prova e do último colocado da prova.

#include <stdlib.h>
#include <stdio.h>

#define qtd_atletas 25000

int main(void) {
    int matricula[qtd_atletas];
    float min_corridos[qtd_atletas];
    
    for (int i = 0; i < qtd_atletas; i++) {
        printf("Digite a matrícula do atleta %d: ", i + 1);
        scanf("%i", &matricula[i]);
        printf("Digite o tempo de corrida (em minutos) do atleta %d: ", i + 1);
        scanf("%f", &min_corridos[i]);
    }

    int vencedor = 0;
    int ultimo_colocado = 0;

    for (int i = 1; i < qtd_atletas; i++) {
        if (min_corridos[i] < min_corridos[vencedor]) {
            vencedor = i;
        }
        if (min_corridos[i] > min_corridos[ultimo_colocado]) {
            ultimo_colocado = i;
        }
    }

    printf("Matrícula do atleta vencedor: %i\n", matricula[vencedor]);
    printf("Matrícula do último colocado: %i\n", matricula[ultimo_colocado]);

    return 0;
}
