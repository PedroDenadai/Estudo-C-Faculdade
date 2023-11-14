//12) Crie uma função e seu protótipo que receba como argumento o preço de uma mercadoria e seu reajuste
//em porcentagem, retorne o preço reajustado e o reajuste calculado em reais. Após isso, use a função no
//programa principal e exiba o preço reajustado e o reajuste de 100 mercadorias informadas pelo usuário.

#include <stdio.h>

double reajuste(double preco, double porcentagem);


double reajuste(double preco, double porcentagem){
    printf("Valor de reajuste %.2f\n", (porcentagem / 100) * preco);
    printf("Valor de reajustado %.2f\n", (porcentagem / 100 + 1) * preco);
    return preco * (porcentagem / 100 + 1);
}

int main(void){
    reajuste(1000, 90);
    reajuste(1000, -90);
    reajuste(1000, 1);
}