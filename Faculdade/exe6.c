#include <stdio.h>

#define SM 1320.01

int main(void) {
    int totalClientes = 1000;


    for (int i = 0; i < totalClientes; i++) {
        double salario;
        printf("Digite o salário do cliente %d: ", i + 1);
        scanf("%lf", &salario);

        if (salario >= 15 * SM) {
            printf("Pertence ao grupo A\n");
        } else if (salario >= 5 * SM) {
            printf("Pertence ao grupo B\n");
        } else {
            printf("Pertence ao grupo C\n");
        }
    }



    return 0;
}
