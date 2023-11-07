#include <stdio.h>

int main() {
    int parar = 0;
    char opcao;

    while (!parar) {
        char produto[100];
        float preco, reajuste;
        int qtd;

        printf("Nome do Produto: ");
        scanf("%s", &produto);


        printf("\nPreco do produto (Em R$): ");
        scanf("%f", &preco);

       printf("\nQuantidade de produtos: ");
       scanf("%i", &qtd);

       printf("\nReajuste (Em %%): ");
        scanf("%f", &reajuste);

        float desconto = (1 - reajuste / 100);
        float sDesconto = qtd * preco;
        float cDesconto = qtd * preco * desconto;

        printf("\nNome do produto: %s \n", produto); 
        printf("\nTotal a pagar sem desconto: %.2f\n", sDesconto);
        printf("Total a pagar com desconto: %.2f\n", cDesconto);


        printf("\nDigite 1 para continuar ou 0 pra sair: ");
        scanf(" %c", &opcao);

        if (opcao == '0') {
            parar = 1;
        }
    }

    return 0;
}
