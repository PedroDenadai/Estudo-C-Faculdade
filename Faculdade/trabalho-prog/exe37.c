//Faça um algoritmo que armazene em três (3) vetores (SIZE = 10) os dados de um carrinho de compra,
//sendo: Código (XXX), Quantidade de cada mercadoria do carrinho e o seu respectivo preço. Após isso,
//exiba na tela:
//37. Total a ser pago, dando um desconto de 2% nas mercadorias que custam mais de R$15.78.

#include <stdio.h>

#define SIZE 2 

int main() {
    int codigo[SIZE],quantidade[SIZE];
    float preco[SIZE], total = 0;

    for (int i = 0; i < SIZE; i++) {
        printf("Informe o código da mercadoria %d: ", i + 1);
        scanf("%d", &codigo[i]);

        printf("Informe a quantidade da mercadoria %d: ", i + 1);
        scanf("%d", &quantidade[i]);

        printf("Informe o preço da mercadoria %d: R$", i + 1);
        scanf("%f", &preco[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        total += quantidade[i] * preco[i];

        if (preco[i] > 15.78) {
            total -= quantidade[i] * preco[i] * 0.02; // tiro os 2 %
        }
    }

    printf("Total a ser pago (com desconto de 2%% nas mercadorias acima de 15.78): R$%.2f\n", total);

    return 0;
}
