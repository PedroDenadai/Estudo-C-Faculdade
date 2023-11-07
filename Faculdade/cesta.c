#include <stdio.h>

#define TAM 1000
#define CESTAMINIMA 880.49

int main(void) {
    float supermercado[TAM];
    float soma = 0.0;
    float media;
    int qtd_super = 0;
    int supermercados_abaixo_media[TAM];
    
    for (int i = 0; i < TAM; i++) {
        printf("Digite o preço da Cesta Básica do Supermercado %i: ", i + 1);
        scanf("%f", &supermercado[i]);
        if(supermercado[i] < CESTAMINIMA){
            printf("Recoloque o valor do super mercado\n");
            i--;
            continue;
        }else{
            soma += supermercado[i];
        }
    }
    media = soma / TAM;
    for (int j = 0; j < TAM; j++) {
        if (supermercado[j] < media) {
            supermercados_abaixo_media[qtd_super] = j + 1;
            qtd_super++;
        }
    }
    float porcentagem = (qtd_super * 100.0) / TAM;
    printf("A porcentagem de supermercados abaixo da média é: %.2f%%\n", porcentagem);
    printf("Lista de supermercados com preços abaixo da média:\n");
    for (int k = 0; k < qtd_super; k++) {
        printf("Supermercado %d\n", supermercados_abaixo_media[k]);
    }
    return 0;
}
