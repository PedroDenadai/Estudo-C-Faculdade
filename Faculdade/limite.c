#include <stdio.h>

int main() {
    int n, limiteInferior, limiteSuperior;

    printf("Digite o valor de n (n >= 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Valor de n inválido. Deve ser n >= 2.\n");
        return 1; 
    }

    printf("Digite o valor do limite inferior: ");
    scanf("%d", &limiteInferior);

    printf("Digite o valor do limite superior (deve ser >= limite inferior): ");
    scanf("%d", &limiteSuperior);

    if (limiteSuperior < limiteInferior) {
        printf("Valores de limite inferior e superior inválidos.\n");
        return 1; 
    }

    printf("Múltiplos de %d entre %d e %d:\n", n, limiteInferior, limiteSuperior);

    int i;
    for (i = limiteInferior; i <= limiteSuperior; i++) {
        if (i % n == 0) {
            printf("%d\n", i);
        }
    }

    return 0; 
}
