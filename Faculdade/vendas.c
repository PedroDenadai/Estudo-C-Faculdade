#include <stdio.h>

int main(void) {
    
    float preco, total;
    int qtd;

    printf("Coloque o preco da mercadoria: ");
    scanf("%f", &preco);

    printf("\nColoque a quantidade de mercadoria: ");
    scanf("%i", &qtd);

    total = preco * qtd;
    printf("Total sem desconto: %.2f\n\n\n", total);

    if (total > 1000){
        printf("Toal com desconto de 3%% : %.2f\n", total  * 0.97);
    } else {
        printf("Total sem desconto: %.2f\n\n\n", total); 
    }
    
       
    
    return 0;
}