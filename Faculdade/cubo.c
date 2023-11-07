#include <stdio.h>

#define PHI 11.5274

int main() {
    float x, y, z;
    float media, cubo_da_media;

    printf("Digite três números reais: ");
    scanf("%f %f %f", &x, &y, &z);

    media = (x + y + z) / 3;
    cubo_da_media = media * media * media;

    if (media < 10 * PHI || media > 200 * PHI) {
        printf("O cubo da média está fora do intervalo [10Φ, 200Φ].\n");
        printf("Cubo da média: %.4f\n", cubo_da_media);
    } else {
        printf("A média está dentro do intervalo [10Φ, 200Φ].\n");
        printf("Média: %.4f\n", media);
    }

    return 0;
}
