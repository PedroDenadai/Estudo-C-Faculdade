#include <stdio.h>

int main() {
    int totalClientes = 0;
    int votosMix1 = 0, votosMix2 = 0, votosMix3 = 0;
    int voto;

    printf("Digite os votos dos clientes sobre os mixes de sabores (1: Mix 1, 2: Mix 2, 3: Mix 3, 0: Sair):\n");

    do {
        printf("Voto do cliente %d: ", totalClientes + 1);
        scanf("%d", &voto);

        if (voto == 0) {
            break;
        } else if (voto == 1) {
            votosMix1++;
        } else if (voto == 2) {
            votosMix2++;
        } else if (voto == 3) {
            votosMix3++;
        } else {
            printf("Opção inválida. Por favor, vote novamente.\n");
            continue;
        }

        totalClientes++;
    } while (1);

    if (totalClientes > 0) {
        printf("Porcentagem de clientes que gostaram do Mix 1: %.2f%%\n", (float) votosMix1 / totalClientes * 100);
        printf("Porcentagem de clientes que gostaram do Mix 2: %.2f%%\n", (float) votosMix2 / totalClientes * 100);
        printf("Porcentagem de clientes que gostaram do Mix 3: %.2f%%\n", (float) votosMix3 / totalClientes * 100);
    } else {
        printf("Nenhum voto foi registrado.\n");
    }

    return 0;
}
