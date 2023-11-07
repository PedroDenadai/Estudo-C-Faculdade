#include <stdio.h>

int main(void) {
    float salario;
    int horas;

    printf("Horas trabalhadas no mes: ");
    scanf("%i", &horas);
    
    
    printf("Salario por hora: ");
    scanf("%f", &salario);

    float total = salario * horas;

    float inss = 0.08 * total;
    float ir = 0.11 * total;
    float sindicato = 0.05 * total;

    printf("\nSalario bruto: %.2f", total);
    printf("\nINSS: %.2f", inss);
    printf("\nSindicato: %.2f", sindicato);
    printf("\nImposto de renda: %.2f",ir);
    
    printf("\nSalario liquido: %.2f\n", total - inss - ir - sindicato);
    
    
    return 0;
    
}