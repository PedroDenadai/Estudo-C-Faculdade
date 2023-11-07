#include <stdio.h>

int main(void) {
    
    float l, a, p;
    float gasolina, alcool;
    printf("Largura do Tanque (em metros): ");
    scanf("%f", &l);
   
    printf("\nAltura do Tanque (em metros): ");
    scanf("%f", &a); 
   
    printf("\nProfundidade do Tanque (em metros): ");
    scanf("%f", &p);

    
    printf("\nPreco da gasolina (por litro): ");
    scanf("%f", &gasolina);

    printf("\nPreco do Alcool (por litro): ");
    scanf("%f", &alcool);


    printf("Tanque tem %.2f de largura, %.2f de altura e %.2f de profundidade.\n\n", l, a, p);

    float tanqueM3 = a * l * p;

    float tanque = tanqueM3 * 1000;
    


    printf("\t\t\t\t-----------------RESULTADOS-----------------\n\n");

    printf("Metro cubico: %.2f", tanqueM3);
    printf("Volume do tanque: %.2f Litros\n", tanque);

    printf("Encher o tanque com GASOLINA: R$ %.2f\n", tanque * gasolina);
    printf("Encher o tanque com ALCOOL: R$ %.2f\n", tanque * alcool);
    printf("Encher o tanque com 20%% ALCOOL e 80%% GASOLINA: R$ %.2f\n", (tanque * 0.2 * alcool) + (tanque * 0.8 * gasolina));


    
    
    
    
    return 0;
}